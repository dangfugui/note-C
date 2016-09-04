#include<cstdio>
#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    char str[1000];
    while(gets(str))
    {
        for(int i=1;i<strlen(str);i++)
        {
            if(str[i-1]=='W'&&str[i]=='O'&&str[i+1]=='W')
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}
