#include<iostream>
#include<cmath>
using namespace std;
main()
{

    long long n,b;
    cin>>n;
    long num[11]={0,0,0,0,0,0,0,0,0,0,0};
    long fun[11]={0,0,0,0,0,0,0,0,0,0,0};
    for(long long i=1;i<=n;i++)
    {
        for(int a=8;a>0;a--)
        {
             fun[a]=n/pow(10.0,a-1);
             //cout<<a<<":::"<<fun[a]<<endl;
           // n=n-fun[a]*pow(10.0,a-1);
        }
        for(b=8;b>0;b--)
        {
            if(fun[b]!=0)
            {
                break;
            }
            cout<<b;
        }
        for(;b>0;b--)
        {
            num[fun[b]]++;
        }
    }
    for(int c=0;c<10;c++)
    {
        cout<<num[c]<<" ";
    }
    cout<<endl;
}

