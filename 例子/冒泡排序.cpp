#include<stdio.h>

main()
{
	int sum=1,n;
	while(scanf("%d",&n))
	{
		sum=1;
		for (int i=1;i<=n;i++)
		{
			sum*=i;

		}
			printf("%d \n  ",sum);
	}
	
}