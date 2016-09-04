#include"iostream"
using namespace std;
int main ()
{
	int a[10];
	for(int i=0;i<10;i++)
		cin>>a[i];
	int h;
	cin>>h;
	int sum=0;
	for(int y=0;y<10;y++)
		if((h+30)>=a[y])
			sum+=1;
	cout<<sum<<endl;
	return 0;
}