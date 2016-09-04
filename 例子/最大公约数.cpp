#include<stdio.h>

int h(int a,int b)
{
	int m,n,x,y,z;
	if(a<b)
	{
		m=b;
		n=a;
	}
	else
	{
		m=a;
		n=b;
	}
	while(n!=0)
	{
		x=n;
		y=m;
		n=m%n;
		m=x;
	}
	return m;
}
main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d",h(a,b));

}
