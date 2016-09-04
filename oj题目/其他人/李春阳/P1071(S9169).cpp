#include"iostream"
using namespace std;
int main ()
{
    int n,ji=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        ji*=i;
    }
    cout<<ji<<endl;
    return 0;
}
