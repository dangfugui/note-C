#include"iostream"
using namespace std;
#include"cstdio"
#include"cstring"
int main ()
{
    char x[2000];
    while(gets(x))
    {
    for(int i=0;i<strlen(x);i++)
    {
        if(x[i]=='W'&&x[i+1]=='O'&&x[i+2]=='W')
        {
            cout<<i+1<<endl;
            break;
        }
    }
    }
    return 0;
}
