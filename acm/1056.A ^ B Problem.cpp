#include"iostream"
using namespace std;

long mod(long m,long n,long k)
{
    long d=1;
    if(m==1||n==0)
        return 1%k;
    if(m==0)
        return 0%k;
    while(n>1)
    {
        if(n%2==0)
        {
            m=m*m%k;
            n=n/2;
        }
        else
        {
            d=d*m%k;
            n=n-1;
            m=m*m%k;
            n=n/2;
        }
    }
    return d*m%k;
}

int main()
{
    long a,b,p;
    cin>>a>>b>>p;
    cout<<mod(a,b,p)<<endl;
    return 0;
}
