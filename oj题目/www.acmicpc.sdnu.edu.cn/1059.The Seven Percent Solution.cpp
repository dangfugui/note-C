#include <iostream>
#include "stdio.h"
#include "string.h"
using namespace std;

int main()
{
    char c[1000];
    while(gets(c))
    {
        if(c[0]=='#')break;
        for(int i = 0 ; i < strlen(c) ; i++)
        {
            if(c[i] ==' ' )
            cout<<"%20";
            else if(c[i]=='!')
            cout<<"%21";
            else if(c[i]=='$')
            cout<<"%24";
            else if(c[i]=='%')
            cout<<"%25";
            else if(c[i]=='(')
                    cout<<"%28";
                    else if(c[i]==')')
                    cout<<"%29";
                    else if(c[i]=='*')
                    cout<<"%2a";
                    else cout<<c[i];
        }
        cout<<endl;
    }
    return 0;
}
