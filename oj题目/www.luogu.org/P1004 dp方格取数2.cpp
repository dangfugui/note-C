

#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int map[12][12]={0};
    int dp[12][12][12][12]={0};
    int x,y,num;
    while(cin>>x>>y>>num){
        if((x||y||num))
            map[x][y]=num;
        else    break;

    }
    for(int xa=1;xa<=N;xa++)
        for(int ya=1;ya<=N;ya++)
            for(int xb=1;xb<=N;xb++)
                for(int yb=1;yb<=N;yb++){
                    dp[xa][ya][xb][yb]=max(max(dp[xa][ya-1][xb][yb-1],dp[xa-1][ya][xb-1][yb])
                                        ,max(dp[xa][ya-1][xb-1][yb],dp[xa-1][ya][xb][yb-1]))+map[xa][ya]+map[xb][yb];
                    if(xa==xb&&ya==yb)  dp[xa][ya][xb][yb]-=map[xa][ya];
                    //fout<<xa<<'-'<<ya<<'-'<<xb<<'-'<<yb<<">>>"<<dp[xa][ya][xb][yb]<<"max"<<dp[xa][ya][xb][xb]<<"+"<<dp[xa][ya][xb][xb]<<"+"<<dp[xa][ya][xb][xb]<<endl;
                }
    cout<<dp[N][N][N][N]<<endl;
}


/*


//简单dp，难点在于状态的表示.

//题目可以看做两人同时取数，这样就避免了后效性，可以用dp做了.

#include<stdio.h>
#include<iostream>
#include<fstream>
using namespace std;
int f[12][12][12][12] = {0}, n, G[12][12];
int max(int a, int b, int c, int d)
{
if (a < b) a= b;
if (a < c) a= c;
if (a < d) a= d;
return a;
}
int main()
{
    ofstream fout("out.txt");
int a, b, c, i, j, k, l;
scanf("%d", &n);
for(;;)
{
scanf("%d%d%d", &a, &b, &c);
if (a || b || c) G[a][b] = c;
else break;
}
for (i = 1; i <= n; i++)
for (j = 1; j <= n; j++)
for (k = 1; k <= n; k++)
for (l = 1; l <= n; l++)
{
f[i][j][k][l] = max(f[i-1][j][k-1][l], f[i-1][j][k][l-1], f[i][j-1][k-1][l], f[i][j-1][k][l-1])+G[i][j]+G[k][l];
if (i == k && j == l) f[i][j][k][l] -= G[i][j];
fout<<i<<'-'<<j<<'-'<<k<<'-'<<l<<">>>"<<f[i][j][k][l]<<endl;
}
for(int nn=0;nn<=n+1;nn++)
printf("%d\n", f[nn][nn][nn][nn]);
}
*/
