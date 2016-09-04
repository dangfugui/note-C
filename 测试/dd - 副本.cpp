#include<stdio.h>
main()
{
	int a;
	int num[]={5,18,15,6,12,4,1,2};
	scanf("%d",&a);
	for(int i=0;i<10;i++)
	{
		if(a==num[i])
		{
			for(int n=i;n<7;n++)

			{
				num[n]=num[n+1];
			}
		}
	}
	for(int x=0;x<7;x++)
	{
		printf("%4d",num[x]);
	}
	printf("\n");
}