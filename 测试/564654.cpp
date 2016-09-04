#include<stdio.h>
int lc(int x)
{
	if(x==1)
	{
		return 1;
	}
	else
	{
		return x*lc(x-1);
	}
}


main()
{
	int b;
	scanf("%d",&b);
	printf("%d\n",lc(b));
}