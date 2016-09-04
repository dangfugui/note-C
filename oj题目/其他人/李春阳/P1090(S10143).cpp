#include"iostream"
using namespace std;
#include"cstring"
#include"cstdio"
int main ()
{
    char x[9000];
    while(gets(x))
    {
        for(int i=0;i<strlen(x);i++)
        {
            if(i==0&&x[i]>='a'&&x[i]<='z')
                x[i]=x[i]-32;
            if(x[i]==' '&&x[i+1]>='a'&&x[i+1]<='z')
                x[i+1]=x[i+1]-32;
        }
        for(int j=0;j<strlen(x);j++)
            cout<<x[j];
        cout<<endl;
    }
    return 0;
}
