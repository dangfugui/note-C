#include<stdio.h>
main()
{
	int num[7]={0,0,0,0,0,0,0};
	int d,f;

	for(int i=0;i<1000;i++)
	{
		scanf("%d %d",&d,&f);
		num[d]=num[d]+f;
		
		
		
		
		
		
		
		
		for(int n=0;n<6;n++)   //		
		{
			printf("%d,   %d  \n",n+1,num[n+1]);
		}
		
	}
	
		
}