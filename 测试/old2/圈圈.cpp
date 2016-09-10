#include<stdio.h>
main()
{
	//int boy[1100];
	int num[1100];
	int a,b,c,d,x,y,z;
	d=y=z=0;

	int r,s;
	printf("请输入人数：\n");
	scanf("%d",&r);
	printf("请输入报数：\n");
	scanf("%d",&s);
	
	for(a=0;a<r;a++)
	{
	//	boy[a]=a;
		num[a]=a;
	}
	for(b=1,x=1;b<=r+10;b++)
	{
		if(b==r+1)	{b=1;continue;}
		if(num[b]==0)
		{
			
			continue;
		}
		if(x==s) 
		{
			x=0;
			d=d+1;
		}
		num[b]=x;
		x=x+1;
		if(d==r-1)	break;
		//num[b]=x;
	//	x=x+1;
		
		
	}
	printf("%d\n",b);

}