#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,n,x;
    cin>>n;
    for(int t=10000;t<=99999;t++)
    {
        x=t;
        a=x/10000;
        x-=a*10000;
        b=x/1000;
        x-=b*1000;
        c=x/100;
        x-=c*100;
        d=x/10;
        x-=d*10;
        e=x;
        if(a==e&&b==d&&a+b+c+d+e==n)
            cout<<t<<endl;
    }
    for(int t=100000;t<=999999;t++)
    {
        x=t;
        a=x/100000;
        x-=a*100000;
        b=x/10000;
        x-=b*10000;
        c=x/1000;
        x-=c*1000;
        d=x/100;
        x-=d*100;
        e=x/10;
        x-=e*10;
        f=x;
        if(a==f&&b==e&&c==d&&a+b+c+d+e+f==n)
            cout<<t<<endl;
    }
    return 0;
}
