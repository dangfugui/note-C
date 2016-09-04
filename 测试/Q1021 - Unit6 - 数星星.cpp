#include<iostream>
using namespace std;
int main()
{
    unsigned long long num=0;
    long m,n,p;
    cin>>n>>m>>p;
    int **f=new int*[n+5];
    for(int a=0;a<=n+3;a++)
    {
        f[a]=new int[m+5];
    }
    for(int a=1;a<=n;a++)
        for(int b=1;b<=m;b++)
        cin>>f[a][b];


    for(int i=1;i<=p;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int c=x1;c<=x2;c++)
        {
            for(int d=y1;d<=y2;d++)
            {
                num+=f[c][d];
            }
        }
        cout<<num<<endl;
    }
    return 0;
}
