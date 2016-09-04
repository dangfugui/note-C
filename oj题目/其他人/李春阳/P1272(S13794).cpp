#include"iostream"
using namespace std;
int main ()
{
	long long n;
	while(cin>>n)
	{
		if(n>=2009)
		{
			cout<<0<<endl;
			continue;
		}
		long long sum=1;
		for(int q=1;q<=n;q++)
		{
			if(sum<2009)
				sum*=q;
			else
			{
				sum%=2009;
				sum*=q;
			}
		}
		cout<<sum%2009<<endl;
	}
	return 0;
}