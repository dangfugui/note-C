#include"iostream"
using namespace std;
int main()
{
    int c;
    int n,k;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        cin>>n>>k;
        cout<<k*2+(n-2)<<endl;
    }
    return 0;
}