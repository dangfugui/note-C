#include<stdio.h>	
main()
{
	long int i,x,y,z;
	i=x=y=z=0;
	scanf("%d",&x);
p1: for(i=2;i<=x;i++)
	{
		if(x%i==0)
		{
			x=x/i;
			printf("%d*",i);
			goto p1;
		}
	}
	printf("\b \n");
}



