#include<stdio.h>

int w(int i,int j,int b, int a)
{
	if(i<0||j<0||i>=b||j>=b||a>0)
		return 0;    //ǽ
	else
		return 1;

}
main()
{
	int num[99][99];
	int i,j,n,d,b;
	scanf("%d",&b);
	i=j=0;
	n=d=1;

	while(n<=b*b)
	{
		num[i][j]=n;
		n++;

		switch(d)
		{
			case 1:
			{
				if(w(i,j+1,b,num[i][j+1])==1)
				{
					j++;
					break;
				}
				else
				{
					i++;
					d=2;break;
				}
			}
			case 2:
			{
				if(w(i+1,j,b,num[i+1][j])==1)
				{
					i++;
					break;
				}
				else
				{
					j--;
					d=3;break;
				}
			}
			case 3:
			{
				if(w(i,j-1,b,num[i][j-1])==1)
				{
					j--;
					break;
				}
				else
				{
					i--;
					d=4;break;
				}
			}
			case 4:
			{
				if(w(i-1,j,b,num[i-1][j])==1)
				{
					i--;
					break;
				}
				else
				{
					j++;
					d=1;break;
				}
			}

		}

	}
	for(int p=0;p<b;p++)
	{
		printf("\n");
		for(int l=0;l<b;l++)
		{
			printf("%4d",num[p][l]);
		}
	}
	printf("\n");
}
