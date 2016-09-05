#include<stdio.h>
int p(int x)
{
	int x,y;
	if(x==1||x==2)
	{
		return 1;
	}
	else
	{
	y=p(n-1)+p(n-2);
	return y;
	}
}
