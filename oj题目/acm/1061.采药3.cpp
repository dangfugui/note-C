//1061.采药3    http://www.acmicpc.sdnu.edu.cn/Problem.aspx?pid=1061


#include<fstream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int main(){
        int m,t,n;
        cin>>m>>t>>n;
        int **dp=new int*[m+2];
        for(int a=0;a<m+1;a++){
            dp[a]=new int[t+2];
            memset(dp[a],0,sizeof(dp)*(t+1));//置0
        }
        int  weight,voluem,value;
        for(int a=0;a<n;a++){
                cin>>weight>>voluem>>value;
                for(int b=m;b>=0;b--){
                    for(int c=t;c>=0;c--){
                        if(b-weight>=0&&c-voluem>=0)
                            dp[b][c]=max(dp[b][c],dp[b-weight][c-voluem]+value);
                    }
                }

        }

        cout<<dp[m][t]<<endl;
        return 0;
}


//XXX上山去采药。XXX有一个最大承重为m(1<=m<=100)且容积为t(1<= t<=100)的背包，他所采集的药材的总重量不能大于背包的最大承重且总体积不能大于背包的容积。已知共有n(1<=n<=1000)株药材，并且知道每株药材的重量w1(1<=w1<=m)、体积w2(1<=w2<=t)及价值v(1<=v<=100000)，如何选择，才能使得采到的药材的总价值最大？
Input
第1行为三个整数m、t和n，分别为背包的最大承重、容积及药材的数量。 第2至n+1行每行三个整数w1、w2和v，分别表示每株药材的重量、体积及价值。
Output
能采到的药材的最大总价值
