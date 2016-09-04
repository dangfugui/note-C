#include"iostream"
using namespace std;
int main ()
{
	int n,k;
	cin>>n>>k;
	int a[201][7];
	for(int i=0;i<201;i++)
	{
		for(int j=0;j<7;j++)
		{
			a[i][j]=0;
		}
	}
	a[1][1]=1;
	for(int q=1;q<=n;q++)
	{
		for(int w=1;w<=k;w++)
		{
			if((!(q==1&&w==1))&&(q>=w))
				a[q][w]=a[q-w][w]+a[q-1][w-1];
		}
	}
	cout<<a[n][k]<<endl;
	return 0;
}
