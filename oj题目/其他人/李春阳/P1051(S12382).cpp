#include"iostream"
using namespace std;
#include"cstring"
#include"cstdio"
#include"string"
char x[]="n5!wpuea^o7!";
char y[]="usimdnaevol";
int main ()
{  
	char z[300];
    gets(z);
	for(int i=0;i<strlen(z);i++)
	{
		for(int j=0;j<strlen(x);j++)
		{
			if(z[i]==x[j])
			{
				z[i]=y[j];
				break;
			}
		}
	}

	for(int y=strlen(z)-1;y>=0;y--)
		cout<<z[y];
    cout<<endl;
	return 0;
}