#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	for(int a=1;a<=n;a++)
	{
		for(int b=1;b<n-a;b++)
		{
			printf(" ");
		}
		for(int c=1;c<=a;c++)
		{
			printf("**");
		}
		
		
		
	}
}
