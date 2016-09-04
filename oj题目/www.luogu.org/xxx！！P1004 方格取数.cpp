#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int map[12][12]={0};
    int dp[24][12][12]={0};
    int x,y,num;
    while(cin>>x>>y>>num){
        if(x==0&&y==0&&num==0)  break;
        map[x][y]=num;
    }
    for(int a=1;a<N*2+4;a++){
        int b,e;
        if(a<N){
            b=0;    e=a;
        }else{
            b=a%N+1;    e=N-1;
        }
        for(;b<=e;b++){
            int c,d;
            if(a<N){
                c=0;    d=a;
            }else{
                c=a%N+1;    d=N-1;
            }
            for(;c<=d;c++){
                if(b!=c){
                    dp[a][b][c]=max(max(dp[a-1][b][c-1],dp[a-1][b-1][c]),max(dp[a-1][b-1][c-1],dp[a-1][b][c]))+map[b][a-b]+map[c][a-c];
                }else{
                    dp[a][b][c]=max(max(    0          ,dp[a-1][b-1][c]),max(dp[a-1][b-1][c-1],dp[a-1][b][c]))+map[b][a-b];
                }
                //cout<<"dp["<<a<<"]["<<b<<"]["<<c<<"]>>"<<dp[a][b][c]<<endl;
            }

        }
    }

    cout<<dp[2*N-2][N-1][N-1]<<endl;
    return 0;
}

/*
思路
http://www.cnblogs.com/v-July-v/p/3320870.html
设有N*N的方格图(N<=9)，我们将其中的某些方格中填入正整数，而其他的方格中则放
人数字0。如下图所示（见样例）：
A
0  0  0  0  0  0  0  0
0  0 13  0  0  6  0  0
0  0  0  0  7  0  0  0
0  0  0 14  0  0  0  0
0 21  0  0  0  4  0  0
0  0 15  0  0  0  0  0
0 14  0  0  0  0  0  0
0  0  0  0  0  0  0  0
                       B
    某人从图的左上角的A点出发，可以向下行走，也可以向右走，直到到达右下角的B
点。在走过的路上，他可以取走方格中的数（取走后的方格中将变为数字0）。
    此人从A点到B点共走两次，试找出2条这样的路径，使得取得的数之和为最大。
 输入输出格式 Input/output
输入格式：
输入的第一行为一个整数N（表示N*N的方格图），接下来的每行有三个整数，前两个
表示位置，第三个数为该位置上所放的数。一行单独的0表示输入结束。
输出格式：
只需输出一个整数，表示2条路径上取得的最大的和。
*/
