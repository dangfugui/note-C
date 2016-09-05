#include<stdio.h>
main()
{
	int a,b;
	b=0;
	int num[]={5,4,12,6,12,4,1,9};
	scanf("%d",&a);
	for(int i=0;i<10;i++)
	{
		if(a==num[i])
		{
			b++;
			for(int n=i;n<8;n++)

			{
				num[n]=num[n+1];i=-1;
			}

		}


	}


	for(int x=0;x<9-b;x++)
	{
		printf("%4d",num[x]);
	}
	printf("\n");
}
