#include<stdio.h>
main()
{
	int boy[99999];
	int r,s,i,n,x,b;
	r=s=i=n=x=0;
//	scanf("%d %d",&r,&s);
	printf("请输入人数：\n");
	scanf("%d",&r);
	printf("请输入开始数的号：\n");
	scanf("%d",&i);
	i=i-1;
	printf("请输入报数：\n");
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
	printf("the last one：%d\n",i);
}