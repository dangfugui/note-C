#include<stdio.h>

void swap(int *x,int *y)
{
	int *p;
	p=x;
	x=y;
	y=p;
}


int add(int *a,int n)
{
	int and=0;
	for(int x=0;x<n;x++,a++)
	{
		and=and+*a;
	}
	return and;
}
main()
{
	int fun[10]={0,1,2,3,4,5,6,7,8,9};
	char *str;
	str="请输入开始和截止求和\n";
	printf("%s",str);

	int *a,n=6,b=1,m;
	printf("请输入开始和截止求和\n");
	scanf("%d %d",&b,&n);
	a=fun+b;
	m=n-b+1;
	printf("%d\n",add(a,m));
	
}
