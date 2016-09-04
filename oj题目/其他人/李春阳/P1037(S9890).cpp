#include"iostream"
using namespace std;
int main ()
{
    int n,counts=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            counts+=i;
    }
    cout<<counts<<endl;
    return 0;

}
