#include"iostream"
using namespace std;
#include"algorithm"
int main ()
{
	int n;
    int a[200];
	int b[200];
	int s=1;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	b[0]=a[0];
	for(int j=1;j<n;j++)
	{
		bool temp=true;
		for(int y=0;y<s;y++)
		{
           if(a[j]==b[y])
			   temp=false;
		}
		if(temp)
		{
			b[s++]=a[j];
		}
	}
	sort(b,b+s);
	cout<<s<<endl;
	for(int r=0;r<s-1;r++)
		cout<<b[r]<<" ";
	cout<<b[s-1];
	cout<<endl;
	return 0;
}