#include<stdio.h>
main()
{
	//int boy[1100];
	int num[999];
	int a,b,c,d,x,y,z;
	d=y=z=0;
	for(int u=0;u<=999;u++)
	{
		num[u]=999;
	}

	int r,s;
	printf("请输入人数：\n");
	scanf("%d",&r);
	printf("请输入开始数的号：\n");
	scanf("%d",&c);
	printf("请输入报数：\n");
	scanf("%d",&s);
	

	for(b=c-1,x=1;b<=r+10;)
	{
		b=b+1;
		if(b==r+1)	{b=1;}
		if(num[b]%s==0)
		{
			continue;
		}
		/*if(x==s) 
		{
			x=0;
			d=d+1;
			printf("%d   out\n",b);
		}*/
		num[b]=x;
		x=x+1;
		if(num[b]%s==0)
		{
			d=d+1;
			printf("%d  out\n",b);
		}
		if(d==r)	break;	
	}
	printf("还剩 %d\n",b);

}