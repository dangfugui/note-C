#include"iostream"
using namespace std;
int main ()
{
	int a[9][9];
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cin>>a[i][j];
		}
	}
	bool temp=true;
	for(int k=0;k<9;k++)
	{
		for(int l=0;l<9;l++)
		{
			for(int p=0;p<9;p++)
			{
				if(l!=p&&a[k][l]==a[k][p])
					temp=false;
			}
		}
	}
	for(int q=0;q<9;q++)
	{
		for(int w=0;w<9;w++)
		{
           for(int e=0;e<9;e++)
		   {
			   if(w!=e&&a[w][q]==a[e][q])
				   temp=false;
		   }
		}
	}
	int sumx=0;
	for(int s=0;s<9;s+=3)
	{
		for(int d=0;d<9;d+=3)
		{
            sumx=a[s][d]+a[s][d+1]+a[s][d+2]+a[s+1][d]+a[s+1][d+1]+a[s+1][d+2]+a[s+2][d]+a[s+2][d+1]+a[s+2][d+2];
			if(sumx!=45)
				temp=false;
			sumx=0;
		}
	}
	if(temp)
		cout<<1<<endl;
	else
		cout<<0<<endl;
	return 0;
}