#include"iostream"
using namespace std;
int main()
{
        long long n;
        long a[10];
        for(int i=0;i<10;i++)
        {
                a[i]=0;
        }
        cin>>n;
        for(long long i=1;i<=n;i++)
        {
                long long t=i;
                while(t>=10)
                {
                        a[t%10]++;
                        t/=10;
                }
                a[t]++;
        }
        for(int u=0;u<10;u++)
        {
                cout<<a[u];
                if(u!=9)
                {
                        cout<<" ";
                }else
                {
                        cout<<endl;
                }
        }
        return 0;
}
