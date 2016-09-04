#include<stdio.h>
main()
{
	int a,b,c,i;
	{	
		for(i=100;i<999;i++)
		{
			a=i/100;
			b=(i/10)%10;
			c=i%10;
			//printf("%d,%d,%d \n",a,b,c);
			if (i==a*a*a+b*b*b+c*c*c)
			{	
				printf("%d \n",i);
			}
		}
	}
}
