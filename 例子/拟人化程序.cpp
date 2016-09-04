#include "stdio.h"
#include "windows.h"

int IsOutRange(int i, int j, int n, int a)
{
	if(i>=n||i<0||j>=n||j<0)
	{
		return 0;
	}
	else if(a>0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

void main()
{
	int n;//size of grid
	printf("Please input a number(<10): ");
	scanf("%d", &n);
	int a[10][10];//array
	int k=1;//number
	int i=0;
	int j=0;
	int direct = 0;//direction
	while(k<=n*n)
	{
		a[i][j]=k;
		//0, right
		//1, down
		//2, left
		//3, up
		
		switch(direct)
		{
		case 0://right
			{
				if(IsOutRange(i, j+1, n, a[i][j+1])==1)
				{
					j++;
				}
				else
				{
					direct = 1;
					i++;
				}
				break;
			}
		case 1://down
			{
				if(IsOutRange(i+1, j, n, a[i+1][j])==1)
				{
					i++;
				}
				else
				{
					direct=2;
					j--;
				}
				break;
			}
		case 2://left
			{
				if(IsOutRange(i, j-1, n, a[i][j-1])==1)
				{
					j--;
				}
				else
				{
					direct=3;
					i--;
				}
				break;
			}
		case 3://up
			{
				if(IsOutRange(i-1, j, n, a[i-1][j])==1)
				{
					i--;
				}
				else
				{
					direct=0;
					j++;
				}
				break;
			}
		}
		k++;

	}

	//print new grid
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}		

	system("pause");
	

}

