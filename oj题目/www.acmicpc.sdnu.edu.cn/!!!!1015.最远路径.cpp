#include<iostream>
using namespace std;

int main()
{
    int n,a,b,x=0,max1=0;
    cin>>n;
    int fun[n+2];
    for(int i=1;i<=n;i++)
    {
        cin>>fun[i]>>a>>b;
    }
    for(int b=n;b>0;b--)
    {
        for(int c=b;c>1;)
        {
            x=fun[c]+x;
            c=c/2;
        }
        max1=(max1>x?max1:x);
        x=0;
    }
    cout<<max1<<endl;
    return 0;
}
