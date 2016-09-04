#include"iostream"
#include"algorithm"
using namespace std;
int main ()
{
	int n;
	int a[100100];
	while(cin>>n)
	{
		for(int q=0;q<n;q++)
			cin>>a[q];
		sort(a,a+n);
		if(n%2==0)
		{
			int w;
			for(w=0;w<n/2-1;w++)
			{
				cout<<a[n-w-1]<<" "<<a[w]<<" ";
			}
			cout<<a[n-w-1]<<" "<<a[w]<<endl;
			break;
		}
		else
		{
			int i;
			for(i=0;i<n/2;i++)
			{
				cout<<a[n-i-1]<<" "<<a[i]<<" ";
			}
			cout<<a[i]<<endl;;
			break;
		}
	}
	return 0;
}