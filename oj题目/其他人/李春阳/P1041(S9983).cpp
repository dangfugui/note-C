#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    int ans[999];
    cin>>a>>b;

    while(a!=0)
    {


        ans[c]=a%b;
        a=a/b;
        c++;

    }
    for(;c>0;c--)
       {
           cout<<ans[c-1];
       }
       cout<<endl;
    return 0;

}
