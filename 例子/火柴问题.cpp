#include<stdio.h>
main()
{
	int y=21;
	int x=0;
	int h;
		
begin:
	for(int i=1;i<7;i++)
	{
		printf("�����%d\n  �������õĻ����:\n",y);
		scanf("%d",&x);
	
		if(x>4||x<1)
		{
			printf("�������,���¿���");
			goto begin;
		}
		h=5-x;
		
		y=y-x;
		y=y-h;	
		printf("��������%d\n",h);
		if(y==1)
		{
			printf("���������1��,��Ӯ��\n");
			break;
		}
	}
}
