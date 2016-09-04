#include<iostream>
using namespace std;
int main()
{
    int n,f[105][105];
    cin>>n;
    for(int a=0;a<n;a++)
        for(int b=0;b<n;b++)
        {
            cin>>f[a][b];
        }
    for(int c=0;c<n;c++)
    {
        for(int d=n-1;d>=0;d--)
        {
            cout<<f[d][c]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
