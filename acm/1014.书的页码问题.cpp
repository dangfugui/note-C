#include<iostream>
#include<cmath>
using namespace std;
main()
{

    long long x,n,b;
    cin>>x;
    n=x;
    long num[11]={0,0,0,0,0,0,0,0,0,0,0};
    long fun[11]={0,0,0,0,0,0,0,0,0,0,0};
    for(long long i=1;i<=n;i++)
    {
        for(int a=8;a>0;a--)
        {
            fun[a]=n/pow(10.0,a-1);
            cout<<a<<":::"<<fun[a]<<endl;
            n=n-fun[a]*pow(10.0,a-1);
        }
    }
    for(int a=1;a<8;a++)
    {

        for(int b=0;b<10;b++)
        {
            num[b]+=x/10;
            //cout<<b<<"gg"<<num[b]<<endl;
        }
        x=x/10;
    }

    for(int e=1;e<9;e++)
    {
        for(int j=0;j<=fun[e];j++)
        {
            num[j]+=pow(10.0,e-1);
        }
    }

    for(int t=0;t<10;t++)
    {
        cout<<num[t]<<" ";
    }
}

