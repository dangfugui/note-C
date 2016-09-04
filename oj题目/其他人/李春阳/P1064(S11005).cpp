#include"iostream"
using namespace std;
#include"cstdio"
#include"cstring"
int main ()
{
	char x[10001];
	while(cin>>x)
	{
		int count1=0;
		int count2=0;
		for(int i=0;i<strlen(x);i++)
		{
			if(x[i]=='B')
				count1++;
			if(x[i]=='G')
				count2++;
		}
		if(count1==count2)
		{
			for(int j=0;j<count1;j++)
				cout<<'B'<<'G';
			cout<<endl;
		}
		else if(count1-count2==1)
		{
			for(int y=0;y<count2;y++)
			{
				cout<<'B'<<'G';
			}
			cout<<'B'<<endl;
		}
		else if(count2-count1==1)
		{
			for(int l=0;l<count1;l++)
				cout<<'G'<<'B';
			cout<<'G'<<endl;
		}
		else 
			cout<<"No"<<endl;
	}
	return 0;
}