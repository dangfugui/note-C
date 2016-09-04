#include<iostream>
using namespace std;
int main(){
    int bx,by,mx,my;
    cin>>bx>>by>>mx>>my;
    bx++;by++;mx++;my++;
    long long dp[25][25]={0};
    dp[0][1]=1;
    for(int a=1;a<bx+2;a++){
        for(int b=1;b<by+2;b++){
            dp[a][b]=dp[a-1][b]+dp[a][b-1];
            if((a==mx&&b==my)||(a==mx+1&&b==my+2)||(a==mx+1&&b==my-2)||(a==mx-1&&b==my+2)||(a==mx-1&&b==my-2)
                             ||(a==mx+2&&b==my+1)||(a==mx+2&&b==my-1)||(a==mx-2&&b==my+1)||(a==mx-2&&b==my-1)){
                dp[a][b]=0;
            }
        }
    }
    cout<<dp[bx][by]<<endl;
    return 0;
}


/*
题目描述 Description
　　棋盘上A点有一个过河卒，需要走到目标B点。卒行走的规则：可以向下、或者向右。同时在棋盘上C点有一个对方的马，该马所在的点和所有跳跃一步可达的点称为对方马的控制点。因此称之为“马拦过河卒”。
　　棋盘用坐标表示，A点(0, 0)、B点(n, m)(n, m为不超过20的整数)，同样马的位置坐标是需要给出的。
　　现在要求你计算出卒从A点能够到达B点的路径的条数，假设马的位置是固定不动的，并不是卒走一步马走一步。
 输入输出格式 Input/output
输入格式：
一行四个数据，分别表示B点坐标和马的坐标。
输出格式：
一个数据，表示所有的路径条数。
 输入输出样例 Sample input/output
输入样例： 6 6 3 3
输出样例： 6

*/
