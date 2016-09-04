#include<stdio.h>
main()
{
	int a,b,c,i;
	for(i=100;i<10000;i++)
	a=i/100;
	b=(i-100*a)%10;
	c=i%10;
	if (i==a*a*a+b*b*b+c*c*c)
	{printf("%d \n",i);}
	}