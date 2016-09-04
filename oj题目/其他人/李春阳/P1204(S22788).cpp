#include"iostream"
using namespace std;
int a[1000001];
int main()
{
	a[0]=a[1]=1;
	for(long i=2;i<=1000001;i++)
	{
		if(i%2)
		{
			a[i]=a[i-1]%1000000000;
		}else{
			a[i]=(a[i-1]+a[i/2])%1000000000;
		}
	}
	int n;
	while(cin>>n)
		cout<<a[n]<<endl;
	//system("pause");
	return 0;
}