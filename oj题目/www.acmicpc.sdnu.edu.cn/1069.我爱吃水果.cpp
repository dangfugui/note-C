
#include"iostream"
using namespace std;
int main ()
{
	int a[8];
	int sum=0,sum1=0,sum2=0;
	cout<<"�ϴ��м���ƻ��"<<endl;
	cin>>a[0];
	cout<<"�ϴ��м�������"<<endl;
	cin>>a[1];
	cout<<"�ϴ��м����㽶"<<endl;
	cin>>a[2];
	cout<<"�ϴ��м�����ݮ"<<endl;
	cin>>a[3];
	cout<<"С�ײ��м���ƻ��"<<endl;
	cin>>a[4];
	cout<<"С�ײ��м�������"<<endl;
	cin>>a[5];
	cout<<"С�ײ��м����㽶"<<endl;
	cin>>a[6];
	cout<<"С�ײ��м�����ݮ"<<endl;
	cin>>a[7];
	cout<<"ż�ǲ�ֻ����ƻ�����������ӣ��㽶����ݮ����"<<endl;
	for(int i=0;i<8;i++)
		sum+=a[i];
	for(int j=0;j<4;j++)
		sum1+=a[j];
	for(int k=4;k<8;k++)
		sum2+=a[k];
	cout<<"ż���ܹ���"<<sum<<"��ˮ��~~"<<endl<<"�ϴ��ܹ���"<<sum1<<"��ˮ��~~"<<endl<<"С�ײ��ܹ���"<<sum2<<"��ˮ��~~"<<endl;
    return 0;
}
