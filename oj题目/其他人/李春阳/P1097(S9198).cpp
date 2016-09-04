#include<iostream>
using namespace std;
 
int h(int a,int b)
{
    int m,n,x,y,z;
    if(a<b)
    {
        m=b;
        n=a;
    }
    else
    {
        m=a;
        n=b;
    }
    while(n!=0)
    {
        x=n;
        y=m;
        n=m%n;
        m=x;
    }
    return m;
}
int main()
{
    int a,b,c;
    while(cin>>a>>b)
 
    {
        c=(a*b)/h(a,b);
    cout<<c<<endl;
    }
    return 0;
 
}
