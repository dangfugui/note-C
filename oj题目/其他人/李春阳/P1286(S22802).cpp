#include"iostream"
#include"cmath"
bool isSushu(long long n)
{
	for(long long i=2;i<=sqrt((double)n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
using namespace std;
int main()
{
	int n;
	long long a[100001];
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
			cin>>a[i];
		int sum=0;
		for(int j=0;j<n;j++)
		{
			if(isSushu(a[j]))
			{
				sum++;
			}
		}
		cout<<sum<<endl;
	}
	//system("pause");
	return 0;
}