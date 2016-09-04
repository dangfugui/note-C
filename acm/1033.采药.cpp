#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,m;
    cin>>t>>m;
    /*int *pow,*time;
    pow=new int[m+5];
    time=new int[m+5];*/
    int pow[102],time[102];
    int sum[102][1002];
    for(int a1=0;a1<=t;a1++)
    {
        sum[0][a1]=0;
    }
    for(int n=1;n<=m;n++)
    {
        cin>>time[n]>>pow[n];
        for(int v=1;v<=t;v++)
        {
            if(v>=time[n])
            {
                sum[n][v]=max(sum[n-1][v],sum[n-1][v-time[n]]+pow[n]);
            }
            else
            {
                sum[n][v]=sum[n-1][v];
            }
            cout<<'n'<<n<<'t'<<v<<';'<<sum[n][v]<<endl;
        }
    }
    cout<<sum[m][t]<<endl;
    return 0;
}
