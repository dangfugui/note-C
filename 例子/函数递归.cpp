#include<stdio.h>	
int and(int a)
{
	if (a==1||a==2)
	{
		return 1;
	}
	else 
	{
		return and(a-2)+and(a-1);
	}
}

main()
{
	int x;
	scanf("%d",&x);
	printf("%d\n",and(x));
}