#include"iostream"
using namespace std;
int main ()
{
    int n,sum=0,x;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        else
            for(int i=1;i<=n;i++)
        {
            cin>>x;
            sum+=x;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;

}
