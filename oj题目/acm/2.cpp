
#include<iostream>
#define MAX 65
using namespace std;
int main()
{
    int N,m,v[MAX][3],w[MAX][3],z=1,dp[3200]={0},dd[65][3]={0};
    cin>>N>>m;
    for(int a=1;a<=m;a++){
        int q;
        cin>>v[z][0]>>w[z][0]>>q;
        if(q!=0){
            if(v[q][1]==0){
                v[q][1]=v[z][0];
                w[q][1]=w[z][0];
            }else{
                v[q][2]=v[z][0];
                w[q][2]=w[z][0];
            }
        }else{
            z++;
        }
    }
    while(z--){
        for(int i=N;i>0;i--){
            int maxa=dp[i];
            if(i-v[z][0]>=0)
                if(dp[i-v[z][0]]+v[z][0]*w[z][0]>maxa)
                    maxa=dp[i-v[z][0]]+v[z][0]*w[z][0];
            if(i-v[z][0]-v[z][1]>=0)
                if(dp[i-v[z][0]-v[z][1]]+v[z][0]*w[z][0]+v[z][1]*w[z][1]>maxa)
                    maxa=dp[i-v[z][0]-v[z][1]]+v[z][0]*w[z][0]+v[z][1]*w[z][1];
            if(i-v[z][0]-v[z][2]>=0)
                if(dp[i-v[z][0]-v[z][2]]+v[z][0]*w[z][0]+v[z][2]*w[z][2]>maxa)
                    maxa=dp[i-v[z][0]-v[z][2]]+v[z][0]*w[z][0]+v[z][2]*w[z][2];
            if(i-v[z][0]-v[z][1]-v[z][2]>=0)
                if(dp[i-v[z][0]-v[z][1]-v[z][2]]+v[z][0]*w[z][0]+v[z][1]*w[z][1]+v[z][2]*w[z][2]>maxa)
                    maxa=dp[i-v[z][0]-v[z][1]-v[z][2]]+v[z][0]*w[z][0]+v[z][1]*w[z][1]+v[z][2]*w[z][2];

            dp[i]=maxa;
        }
    }
    cout<<dp[N]<<endl;
    return 0;
}
