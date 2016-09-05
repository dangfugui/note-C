#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	for(int a=1;a<=n;a++)
	{
		for(int b=1;b<n-a+1;b++)
		{
			printf(" ");
		}
		printf("*");
		for(int c=1;c<a;c++)
		{
			printf("**");
		}
		printf("\n");	
	}

	for(int a1=1;a1<n;a1++)
	{
		for(int d=0;d<a1;d++)
		{
			printf(" ");
		}
		printf("*");
		for(int e=1;e<n-a1;e++)
		{
			printf("**");
		}
		printf("\n");
		
		
	}
}
