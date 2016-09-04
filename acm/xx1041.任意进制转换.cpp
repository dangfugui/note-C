#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    int ans[999];
    cin>>a>>b;
    do
    {
        ans[c]=a%b;
        a=a/b;
        c++;
    }
    while(a!=0);
    for(;c>0;c--)
       {
           cout<<ans[c-1];
       }
       cout<<endl;
    return 0;

}
