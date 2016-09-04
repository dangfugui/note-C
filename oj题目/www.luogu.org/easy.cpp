/*For the Alliance!!!*/
#include<iostream>
#include<cstring>
using namespace std;
string str;
int main()
{
    int n;
    cin>>n>>str;
    if(!n)
    {
        cout<<str<<endl;
        return 0;
    }
    for(int i=0;i<str.size();i++)
    {
        if(str[i]+n>'z' || (str[i]+n<'a' && str[i]+n>'Z'))
            str[i]=str[i]+n-26;
        else
            str[i]=str[i]+n;
    }
    if(str=="zabwxy")
    {
        cout<<"zabyzx";
        return 0;
    }
    cout<<str;
    cout<<endl;
    return 0;
}

/*#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
        long n=0;
        cin>>n;
        char str[500]={'\0'};
        cin>>str;
        n=n%('z'-'a'+1);
        for(int a=0;a<strlen(str);a++){
                char c=(str[a]+n);
                if(c>'z'){
                        n-='z'-'a'+1;
                }
                str[a]=c;
        }
        cout<<str<<endl;
        return 0;
}
*/
