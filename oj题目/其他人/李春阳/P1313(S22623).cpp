#include"iostream"
using namespace std;
int main()
{
        long long res[100001]={0};
        res[1]=1;
        res[2]=1;
        for(long i=3;i<=100000;i++)
        {
                res[i]=(res[i-1]+res[i-2])%268435456;
        }
        long n,m,a;
        long sum=0;
        cin>>n>>m;
        for(long i=0;i<m;i++)
        {
                cin>>a;
                sum+=res[a];
                sum%=268435456;
        }
        cout<<sum<<endl;
        return 0;
}
