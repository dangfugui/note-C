#include"iostream"
#include"algorithm"
#include"cstdio"
using namespace std;
long a[1000001];
bool comp(long a,long b)
{
        if(a<b)
                return false;
        return true;
}
int main()
{
        long k;
        long index=0;
        scanf("%ld",&k);
        while(cin>>a[index++]);
        sort(a,a+index,comp);
        long sum=0;
        for(long i=0;i<k;i++)
        {
                sum+=a[i];
        }
        cout<<sum<<endl;
        return 0;
}
