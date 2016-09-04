#include"iostream"
using namespace std;
#include"algorithm"
int main ()
{
	int w,n;
	int a[30001];
	cin>>w>>n;
	for(int q=0;q<n;q++)
		cin>>a[q];
	sort(a,a+n);
	int sum=0;
	int r=0,e=n-1;
	while(e>r)
	{
		if((a[r]+a[e])<=w)
		{
			sum++;
			r++;
			e--;
		}
		else
		{
			sum++;
			e--;
		}
	}
	if(e==r)
		sum++;
	cout<<sum<<endl;
	return 0;
}