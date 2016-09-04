#include"iostream"
using namespace std;
int main ()
{
	int l,m;
	int a[250],b[250];
	cin>>l>>m;
	for(int i=0;i<m;i++)
		cin>>a[i]>>b[i];
	int c[20000];
	for(int y=0;y<20000;y++)
		c[y]=0;
	int sum=0;
	for(int q=0;q<m;q++)
	{
		for(int w=a[q];w<=b[q];w++)
			c[w]=1;
	}
	for(int r=0;r<=l;r++)
	{
		if(c[r]==0)
			sum++;
	}
	cout<<sum<<endl;
	return 0;

}