#include"iostream"
#include"cstring"
#include"cstdio"
#include <stdlib.h>
#include <stdio.h>


using namespace std;
int main()
{
	long a,b;
	while(cin>>a>>b)
	{
		int count=0;
		for(long i=a;i<=b;i++)
		{
			char x[30];
			itoa(i,x,10);
			bool flag=true;
			for(long j=0;j<strlen(x);j++)
			{
				if(x[j]=='4')
				{
					flag=false;
					break;
				}
			}
			if(flag)
				count++;

		}
		cout<<count<<endl;
	}
	//system("pause");
	return 0;
}