
#include"iostream"
using namespace std;
int main ()
{
    int n;
    int a[35];
    a[0]=1;
    a[1]=2;
    a[2]=4;
    for(int i=3;i<35;i++)
    {
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    while(cin>>n)
        cout<<a[n-1]<<endl;
    return 0;
}
