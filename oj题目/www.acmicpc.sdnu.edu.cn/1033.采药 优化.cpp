#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,m;
    cin>>t>>m;

    int pow[102],time[102];
    int sum[1002];
    for(int a1=0;a1<=t;a1++)
    {
        sum[a1]=0;
    }
    for(int n=1;n<=m;n++)
    {
        cin>>time[n]>>pow[n];
        for(int v=t;v>0;v--)
        {
            if(v>=time[n])
            {
                sum[v]=max(sum[v],sum[v-time[n]]+pow[n]);
            }
            else
            {
                sum[v]=sum[v];
            }
            //cout<<v<<";"<<sum[v]<<endl;
        }
    }
    cout<<sum[t]<<endl;
    return 0;
}
