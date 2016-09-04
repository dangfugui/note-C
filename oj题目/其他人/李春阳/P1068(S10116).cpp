#include"iostream"
using namespace std;
#include"cstring"
#include"cstdio"
int main ()
{
    char x[1000];
    while(gets(x))

    {
        for(int i=0;i<strlen(x);i++)
    {
        if(x[i]>='A'&&x[i]<='Z')
        {
            x[i]=x[i]+32;
        }
    }
    for(int j=0;j<strlen(x);j++)
        cout<<x[j];
        cout<<endl;
    }

    return 0;

}
