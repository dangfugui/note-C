#include"iostream"
using namespace std;
#include"algorithm"
int main ()
{
    long long x;
    long long a[100002];
    long long sum=0;
    while(cin>>x)
    {
        if(x==0)
            return 0;
        else
        {
           for(int i=0;i<x;i++)
           {
               cin>>a[i];
           }
           sort(a,a+x);
           sum=(a[x-1]-a[0])*2;
           cout<<sum<<endl;
        }
        sum=0;
    }
    return 0;
}