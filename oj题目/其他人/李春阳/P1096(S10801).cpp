#include"iostream"
using namespace std;
#include"algorithm"
int main ()
{
    int a[5001],c[5001];
    int m,n;
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    cin>>n;
    for(int k=0;k<n;k++)
        cin>>c[k];
    for(int d=0;d<n;d++)
    {
        cout<<a[c[d]-1]<<endl;
    }
    return 0;
}
