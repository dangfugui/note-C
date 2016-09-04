#include"iostream"
using namespace std;
int main ()
{
    int n,j,sum=0;
    while(cin>>n)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>j;
            sum+=j;
        }
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
