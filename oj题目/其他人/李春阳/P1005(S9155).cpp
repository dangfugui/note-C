#include"iostream"
using namespace std;
int main ()
{
    int n,i,sum=0,a;
    cin>>n;
    for(int j=1;j<=n;j++)
    {
        while(cin>>i)
        {
            for(int k=1;k<=i;k++)
            {
                cin>>a;
                sum+=a;
            }
            cout<<sum<<endl;
            sum=0;
        }
    }
    return 0;
}
