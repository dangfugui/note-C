#include<stdio.h>

int b(int i,int j,int n)
{
	if(i<0||i>9||j<0||j>9||n<0)
	{
		return 0;
	}
	else return 1;
}
main()

{
	int x[10][10];
	int i,j;
	i=j=0;
	int a,n;
	a=n=1;
	while(n<100)
	{
		x[i][j]=n;
		n++;
		switch(a)
		{
		case 1:
		{
			if(b(i,j,x[i][j])==1)
			{
			j++;break;
			}
			else
				a=2;
		}
		case 2:
		{
			if(b(i,j,x[i][j])==1)
			{
			i++;break;
			}
			else
				a=3;
		}
		
		
		case 3:
		{
			if(b(i,j,x[i][j])==1)
			{
			j--;break;
			}
			else
				a=4;
		}
		
		case 4:
		{
			if(b(i,j,x[i][j])==1)
			{
			i--;break;
			}
			else
				a=1;
		}	
	}
}
