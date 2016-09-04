#include"iostream"
#include"cstring"
#include"algorithm"
using namespace std;
int main()
{
        int n;
        int a[110];
        while(cin>>n)
        {
                if(n==0)
                        return 0;
                long res=0;
                for(int i=0;i<n;i++)
                        cin>>a[i];
                for(int j=0;j<n;j++)
                        res+=a[j]*a[j];
                cout<<res<<endl;
        }
        return 0;
}
