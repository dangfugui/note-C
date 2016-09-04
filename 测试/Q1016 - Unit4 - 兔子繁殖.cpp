#include<iostream>
using namespace std;
int main()
{
    unsigned long long n,f[14];
    cin>>n;
    for(int i=0;i<=13;i++)
    {
        f[i]=0;
    }
    f[1]=1;

    for(int i=2;i<=n;i++)
    {
        long long out=0;
        for(int i1=2;i1<=12;i1++)
        {
            out+=f[i1]%100000007;
        }
        for(int i2=13;i2>=2;i2--)
            f[i2]=f[i2-1]%100000007;
        f[1]=out;
    }

    long long num=0;
    for(int b=1;b<=12;b++)
    {
        num+=f[b]%100000007;
    }
    cout<<num%100000007<<endl;
    return 0;
}
