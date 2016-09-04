#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int n,m_sum,m[65],v[65],p[65],v_max[3200]={0},link[65][3]={0};
    cin >> m_sum >> n;
    m_sum/=10;
    for (int i=1;i<=n;i++) {
        cin >> m[i] >> v[i] >> p[i];
        m[i]/=10;
        if (p[i]!=0) link[p[i]][++link[p[i]][0]]=i;
    }

    for (int i=1;i<=n;i++) for (int j=m_sum;j>=1;j--) if (p[i]==0 && j>=m[i]) {
        v_max[j]=max(v_max[j],v_max[j-m[i]]+m[i]*v[i]);
        int a=link[i][1],b=link[i][2];
        if (link[i][0]>=1 && j-m[i]>=m[a]) v_max[j]=max(v_max[j],v_max[j-m[i]-m[a]]+m[i]*v[i]+m[a]*v[a]);
        if (link[i][0]==2) {
            if (j-m[i]>=m[b]) v_max[j]=max(v_max[j],v_max[j-m[i]-m[b]]+m[i]*v[i]+m[b]*v[b]);
            if (j-m[i]>=m[a]+m[b]) v_max[j]=max(v_max[j],v_max[j-m[i]-m[a]-m[b]]+m[i]*v[i]+m[a]*v[a]+m[b]*v[b]);
        }
    }
    cout << v_max[m_sum]*10 << endl;
    return 0;
}



/*
#include<iostream>
#define MAX 61
using namespace std;
int main()
{
    int N,m,v[MAX][3],w[MAX][3],z=1,dp[3200],dd[10][3];
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
}*/

/*
http://www.rqnoj.cn/problem/6
题目描述
　　金明今天很开心，家里购置的新房就要领钥匙了，新房里有一间金明自己专用的很宽敞的房间。更让他高兴的是，妈妈昨天对他说：“你的房间需要购买哪些物品，怎么布置，你说了算，只要不超过N元钱就行”。今天一早，金明就开始做预算了，他把想买的物品分为两类：主件与附件，附件是从属于某个主件的，下表就是一些主件与附件的例子：
主件 附件
电脑 打印机，扫描仪
书柜 图书
书桌 台灯，文具
工作椅 无
　　如果要买归类为附件的物品，必须先买该附件所属的主件。每个主件可以有0个、1个或2个附件。附件不再有从属于自己的附件。金明想买的东西很多，肯定会超过妈妈限定的N元。于是，他把每件物品规定了一个重要度，分为5等：用整数1~5表示，第5等最重要。他还从因特网上查到了每件物品的价格（都是10元的整数倍）。他希望在不超过N元（可以等于N元）的前提下，使每件物品的价格与重要度的乘积的总和最大。
　　设第j件物品的价格为v[j]，重要度为w[j]，共选中了k件物品，编号依次为j1，j2，……，jk，则所求的总和为：v[j1]*w[j1]+v[j2]*w[j2]+ …+v[jk]*w[jk]。（其中*为乘号）请你帮助金明设计一个满足要求的购物单。
输入格式
　　输入文件的第1行，为两个正整数，用一个空格隔开：
N m
其中N（<32000）表示总钱数，m（<60）为希望购买物品的个数。）
从第2行到第m+1行，第j行给出了编号为j-1的物品的基本数据，每行有3个非负整数
v p q
（其中v表示该物品的价格（v<10000），p表示该物品的重要度（1~5），q表示该物品是主件还是附件。如果q=0，表示该物品为主件，如果q>0，表示该物品为附件，q是所属主件的编号）
输出格式
　　 输出文件只有一个正整数，为不超过总钱数的物品的价格与重要度乘积的总和的最大值
（<200000）。
*/
