#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
    int N;
    //int map[105][105],mmax[105][105];
    cin>>N;
    int **map=new int*[N+2];
    int **mmax=new int*[N+2];
    for(int a=0;a<N+2;a++){
        map[a]=new int[N+2];
        mmax[a]=new int[N+2];
    }
    for(int a=0;a<N;a++){
        for(int b=0;b<N;b++){
            cin>>map[a][b];
        }
    }
    for(int h=0;h<N;h++){
        for(int l=0;l<N;l++){
            if(h==0&&l==0){
                mmax[h][l]=map[h][l];
            }else if(h==0){
                mmax[h][l]=mmax[h][l-1]+map[h][l];
            }else if(l==0){
                mmax[h][l]=mmax[h-1][l]+map[h][l];
            }else{
                mmax[h][l]=max(mmax[h-1][l],mmax[h][l-1])+map[h][l];
            }
        }
    }
    cout<<mmax[N-1][N-1]<<endl;
    return 0;
}



/*1038.收集宝藏
Time Limit: 1500 MS    Memory Limit: 32768 KB
Total Submission(s): 161    Accepted Submission(s): 81
Description
有一个n*n的矩阵，矩阵每个格子中都有一些宝藏，从左上角(1, 1)出发，每次只能向下或者向右移动一格，已知每个格子中宝藏的价值，求走到右下角(n, n)时能收集到的宝藏的总最大价值。
Input
第一行为一个整数n(1 <= n <= 1000)，表示矩阵的行、列数。
Output
一个整数，表示能收集到的宝藏的最大总价值。
Sample Input
4
1 2 3 10
3 4 1 1
5 2 1 1
1 3 1 1
Sample Output
19
Source
Unkown*/
