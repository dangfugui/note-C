#include<stdio.h>
main()
{
	int boy[99999];
	int r,s,i,n,x,b;
	r=s=i=n=x=0;
//	scanf("%d %d",&r,&s);
	printf("������������\n");
	scanf("%d",&r);
	printf("�����뿪ʼ���ĺţ�\n");
	scanf("%d",&i);
	i=i-1;
	printf("�����뱨����\n");
	scanf("%d",&s);
	for(x=1;n<r;)
	{	
		i=i+1;
		if(i==r+1){i=1;}
		if(boy[i]==0){continue;}
		if(x==s){x=0;n=n+1;printf("%d out\n",i);}
		boy[i]=x;
		x=x+1;
	
	
	}
	printf("the last one��%d\n",i);
}