#include<iostream>
#include<malloc.h>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int n,m;
    int f[101][1001];
    int i=0;

    cin>>n>>m;
    for(int j=0;j<n;j++)
    {
        f[i][j]=(int)malloc(sizeof(int));
        f[i][j]=0;
    }
    int a[100],b[100];;
    for( i=1;i<=m;i++)
    {
        cin>>a[i]>>b[i];
        for(int j=0;j<=n;j++)
        {
            f[i][j]=(int)malloc(sizeof(int));
            if(a[i]>j)
                f[i][j]=f[i-1][j];
            else
                f[i][j]=max(f[i-1][j],f[i-1][j-a[i]]+b[i]);
        }
    }
    cout<<f[m][n]<<endl;
    return 0;
}