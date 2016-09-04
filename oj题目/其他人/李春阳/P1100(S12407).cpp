#include"iostream"
using namespace std;
#include"string.h"
int main()
{
	char a[100001],b[1001];
	cin>>a>>b;
	if(strstr(a,b)==NULL)
		cout<<-1<<endl;
	else
	{
		cout<<strstr(a,b)-a+1<<endl;
	}
	return 0;
}
