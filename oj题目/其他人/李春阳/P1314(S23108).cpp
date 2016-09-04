#include"iostream"
using namespace std;
int fun(int n)
{
	if(n==0)
		return 2;
	if(n==1)
		return 3;
	int res=1;
	for(int i=0;i<n-1;i++)
		res*=2;
	return res+fun(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<fun(n)<<endl;
	//system("pause");
	return 0;
}