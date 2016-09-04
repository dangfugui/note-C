#include <stdio.h>
#include <stdlib.h>
#include <winsock.h>
#pragma  comment (lib, "ws2_32.lib")
#define ICMP_ECHOREPLY	0  // ICMP�ظ�Ӧ��
#define ICMP_ECHOREQ	8  // ICMP��Ӧ����
#define REQ_DATASIZE 32		// �������ݱ���С
// ����IP�ײ���ʽ
typedef struct _IPHeader
{
	u_char  VIHL;			// �汾���ײ�����
	u_char	ToS;			// ��������
	u_short	TotalLen;		// �ܳ���
	u_short	ID;			// ��ʶ��
	u_short	Frag_Flags;		// ��ƫ����
	u_char	TTL;			// ����ʱ��
	u_char	Protocol;		// Э��
	u_short	Checksum;		// �ײ�У���
	struct	in_addr SrcIP;	// ԴIP��ַ
	struct	in_addr DestIP;	// Ŀ�ĵ�ַ
}IPHDR, *PIPHDR;
// ����ICMP�ײ���ʽ
typedef struct _ICMPHeader
{
	u_char	Type;			// ����
	u_char	Code;			// ����
	u_short	Checksum;		// �ײ�У���
	u_short	ID;				// ��ʶ
	u_short	Seq;			// ���к�
	char	Data;			// ����
}ICMPHDR, *PICMPHDR;
// ����ICMP��Ӧ����
typedef struct _ECHOREQUEST
{
	ICMPHDR icmpHdr;
	DWORD	dwTime;
	char	cData[REQ_DATASIZE];
}ECHOREQUEST, *PECHOREQUEST;
// ����ICMP��Ӧ��
typedef struct _ECHOREPLY
{
	IPHDR	ipHdr;
	ECHOREQUEST	echoRequest;
	char    cFiller[256];
}ECHOREPLY, *PECHOREPLY;
// ����У���
u_short checksum(u_short *buffer, int len)
{
	register int nleft = len;
	register u_short *w = buffer;
	register u_short answer;
	register int sum = 0;
    // ʹ��32bit���ۼ���������16bit�ķ�������
	while( nleft > 1 )  {
		sum += *w++;
		nleft -= 2;
	}
	// ��ȫ����λ
	if( nleft == 1 ) {
		u_short	u = 0;
		*(u_char *)(&u) = *(u_char *)w ;
		sum += u;
	}
   // ��������16bit�Ӹ�λ������λ
	sum = (sum >> 16) + (sum & 0xffff);	/* add hi 16 to low 16 */
	sum += (sum >> 16);			/* add carry */
	answer = ~sum;				/* truncate to 16 bits */
	return (answer);
}
// ���ͻ�Ӧ������
int SendEchoRequest(SOCKET s,struct sockaddr_in *lpstToAddr)
{
	static ECHOREQUEST echoReq;
	static int nId = 1;
	static int nSeq = 1;
	int nRet;
	// ����Ӧ������Ϣ
	echoReq.icmpHdr.Type		= ICMP_ECHOREQ;
	echoReq.icmpHdr.Code		= 0;
	echoReq.icmpHdr.Checksum	= 0;
	echoReq.icmpHdr.ID			= nId++;
	echoReq.icmpHdr.Seq			= nSeq++;
	// ���Ҫ���͵����ݣ������д��
	for (nRet = 0; nRet < REQ_DATASIZE; nRet++)
		echoReq.cData[nRet] = ' '+nRet;
	// ���淢�͵�ʱ��
	echoReq.dwTime = GetTickCount();
	// �����Ӧ�����У���
	echoReq.icmpHdr.Checksum = checksum((u_short *)&echoReq, sizeof(ECHOREQUEST));
	// ���ͻ�Ӧ����
	nRet = sendto(s,						// ��������׽���
				 (LPSTR)&echoReq,			// ���͵Ļ���������
				 sizeof(ECHOREQUEST),
				 0,							// ��־λ
				 (struct sockaddr*)lpstToAddr, // ���͵�Ŀ���ַ
				 sizeof(SOCKADDR_IN));   // ��ַ�ṹ����
	if (nRet == SOCKET_ERROR)
	{
		printf("sendto() error:%d\n",WSAGetLastError());
	}
	return (nRet);
}
// ����Ӧ��ظ������н���
DWORD RecvEchoReply(SOCKET s, LPSOCKADDR_IN lpsaFrom, u_char *pTTL)
{
	ECHOREPLY echoReply;
	int nRet;
	int nAddrLen = sizeof(struct sockaddr_in);
	//����Ӧ��ظ�
	nRet = recvfrom(s,					// ���յ��׽���
					(LPSTR)&echoReply,	// ���յĻ�����
					sizeof(ECHOREPLY),	// ����������
					0,					// ��ʶ
					(LPSOCKADDR)lpsaFrom,	// ���յĵ�ַ
					&nAddrLen);			// ��ַ�ṹ����

	// ������ս��
	if (nRet == SOCKET_ERROR)
	{
		printf("recvfrom() error:%d\n",WSAGetLastError());
	}
    // ��¼���ص�TTL
	*pTTL = echoReply.ipHdr.TTL;
	//����Ӧ��ʱ��
	return(echoReply.echoRequest.dwTime);
}
// �ȴ���Ӧ�𸴣�ʹ��select����
int WaitForEchoReply(SOCKET s)
{
	struct timeval timeout;
	fd_set readfds;
	readfds.fd_count = 1;
	readfds.fd_array[0] = s;
	timeout.tv_sec = 5;
    timeout.tv_usec = 0;
	return(select(1, &readfds, NULL, NULL, &timeout));
}
// Ping����ʵ��
void Ping(char *pstrHost)

{
	SOCKET	  rawSocket;
	LPHOSTENT lpHost;
	struct    sockaddr_in destIP;
	struct    sockaddr_in srcIP;
	DWORD	  dwTimeSent;
	DWORD	  dwElapsed;
	u_char    cTTL;
	int       nLoop;
	int       nRet;
	// ����ԭʼ�׽��֣�ICMP����
	rawSocket = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP);
	if (rawSocket == SOCKET_ERROR)
	{
		printf("socket() error:%d\n",WSAGetLastError());
		return;
	}
	// ���Ŀ������

	lpHost = gethostbyname(pstrHost);
	if (lpHost == NULL)
	{
		printf("Host not found: %s\n", pstrHost);
		return;
	}
	// ����Ŀ�����ַ
	destIP.sin_addr.s_addr = *((u_long FAR *) (lpHost->h_addr));
	destIP.sin_family = AF_INET;
	destIP.sin_port = 0;
	// ��ʾ��ʼ����Ping
	printf("\nPinging %s with %d bytes of data:\n",
				inet_ntoa(destIP.sin_addr),
				REQ_DATASIZE);
	// ������Ping����
	for (nLoop = 0; nLoop < 4; nLoop++)
	{
		//����ICMP��Ӧ����
		SendEchoRequest(rawSocket, &destIP);
		// ʹ��select()�ȴ��ظ�������
		nRet = WaitForEchoReply(rawSocket);
		if (nRet == SOCKET_ERROR)
		{
			printf("select() error:%d\n",WSAGetLastError());
			break;
		}
		if (!nRet)
		{
			printf("\nRequest time out");
			break;
		}
		//���ջظ�
		dwTimeSent = RecvEchoReply(rawSocket, &srcIP, &cTTL);
		// ���㻨�ѵ�ʱ��
		dwElapsed = GetTickCount() - dwTimeSent;
		printf("\nReply from %s: bytes=%d time=%ldms TTL=%d",
               inet_ntoa(srcIP.sin_addr),
			   REQ_DATASIZE,
               dwElapsed,
               cTTL);
	}
	printf("\n");
	nRet = closesocket(rawSocket); // �ر��׽��֣��ͷ���Դ
	if (nRet == SOCKET_ERROR)
	{
		printf("closesocket() error:%d\n",WSAGetLastError());
	}

}
void main(int argc, char **argv)
{
    WSADATA wsd;
    int nRet;
	// �������Ĳ���
    if (argc != 2)
    {
		printf("\nUsage: ping hostname\n");
		return;
    }
    // ��ʼ��Winsock
	if (WSAStartup(MAKEWORD(1,1), &wsd) != 0)
    {
        printf("����Winsockʧ��!\n");
    }
	//��ʼPing

	Ping(argv[1]);
	}

	// �ͷ�Winsock��Դ
    WSACleanup();
    return 1;
}


