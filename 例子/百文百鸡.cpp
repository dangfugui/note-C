#include <stdio.h>
void main()
{
	int a,b,c;
	
	for(a=0;a<20;a++)
	{
		for(b=0;b<33;b++)
		{
			for(c=0;c<100;c+=3)
			{
				if((a+b+c==100)&&(5*a+3*b+c/3)==100)
				{
					printf("公鸡个数%d,母鸡个数%d,小鸡个数%d\n",a,b,c);
				}
			}
		}
	}
}
