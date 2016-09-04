#include<iostream>
using namespace std;
long long pow(long long a,long long b,long long c)
{
	if(a==1||b==0)
		return 1;
	if(b==1)
		return a%c;
	long long t=pow(a,b/2,c);
	if(b%2)
		return t*t*a%c;
	return t*t%c;
}
int main()
{
long long  x,y,z;
cin>>x>>y>>z;
cout<<pow(x,y,z);
return 0;
}