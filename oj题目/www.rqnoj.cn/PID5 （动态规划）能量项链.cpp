#include<iostream>
#include<fstream>
#include<string.h>
#define N 201
using namespace std;
int main() {
    int n,e[N],maxa[N][N],ans=0;
    cin>>n;
    for(int a=1;a<=n;a++){//重1开始
        cin>>e[a];
        e[a+n]=e[a];
    }
    //
    for(int i=2;i<2*n;i++){
        for(int j=i-1;j>0&&i-j<n;j--){
            for(int k=j;k<i;k++){
                int maxb;
                maxb=maxa[j][k]+maxa[k+1][i]+e[j]*e[k+1]*e[i+1];
                if(maxb>maxa[j][i]){
                    maxa[j][i]=maxb;
                }
            }
            if(maxa[j][i]>ans)
                ans=maxa[j][i];
        }
    }

    cout<<ans<<endl;
    return 0;
}
/*
题目描述
　　在Mars星球上，每个Mars人都随身佩带着一串能量项链。在项链上有N颗能量珠。能量珠是一颗有头标记与尾标记的珠子，这些标记对应着某个正整数。并且，对于相邻的两颗珠子，前一颗珠子的尾标记一定等于后一颗珠子的头标记。因为只有这样，通过吸盘（吸盘是Mars人吸收能量的一种器官）的作用，这两颗珠子才能聚合成一颗珠子，同时释放出可以被吸盘吸收的能量。如果前一颗能量珠的头标记为m，尾标记为r，后一颗能量珠的头标记为r，尾标记为n，则聚合后释放的能量为m*r*n（Mars单位），新产生的珠子的头标记为m，尾标记为n。
需要时，Mars人就用吸盘夹住相邻的两颗珠子，通过聚合得到能量，直到项链上只剩下一颗珠子为止。显然，不同的聚合顺序得到的总能量是不同的，请你设计一个聚合顺序，使一串项链释放出的总能量最大。
例如：设N=4，4颗珠子的头标记与尾标记依次为(2，3) (3，5) (5，10) (10，2)。我们用记号⊕表示两颗珠子的聚合操作，(j⊕k)表示第j，k两颗珠子聚合后所释放的能量。则第4、1两颗珠子聚合后释放的能量为：
(4⊕1)=10*2*3=60。
这一串项链可以得到最优值的一个聚合顺序所释放的总能量为
((4⊕1)⊕2)⊕3）=10*2*3+10*3*5+10*5*10=710。
输入格式
　　输入文件的第一行是一个正整数N（4≤N≤100），表示项链上珠子的个数。第二行是N个用空格隔开的正整数，所有的数均不超过1000。第i个数为第i颗珠子的头标记（1≤i≤N），当1≤i＜N时，第i颗珠子的尾标记应该等于第i+1颗珠子的头标记。第N颗珠子的尾标记应该等于第1颗珠子的头标记。
至于珠子的顺序，你可以这样确定：将项链放到桌面上，不要出现交叉，随意指定第一颗珠子，然后按顺时针方向确定其他珠子的顺序。
输出格式
　　输出文件只有一行，是一个正整数E（E≤2.1*10^9），为一个最优聚合顺序所释放的总能量。
*/
/*
 DP题，与石子合并和矩阵连乘都很相似。
    首先项链是环状的，我们肯定要把它从某处断开，从哪断开呢？枚举咯。当我们已经把它从某处断开以后，将断开后的珠子按顺序依次标号为1-n，这时如果我们用e_max[i][j]表示从第i颗珠子到第j颗珠子合并所能得到的最大能量，则所求即为e_max[1][n]。如果再用e[i]表示第i颗珠子的头标记，那么容易发现状态转移方程：e_max[i][j]=max(e_max[i][k]+e_max[k+1][j]+e[i]*e[k+1]*e[j+1])，其中，i<=k<j。
    这样，枚举断开点、i、j、k，复杂度为O(n^4)。这对于n<=100的数据来说跑极限数据可能有超时的危险。那么复杂度再能不能降了呢？
    我们可以在读入数据时把e[]复制一份，像这样：fin >> e[i];e[i+n]=e[i]。这样我们就可以不需要枚举断开点了，因为当断开点为n|1时，其对应e_max[1][n]；当断开点为1|2时，其对应e_max[2][n+1]；以此类推。这样，算法的复杂度便降为O(n^3)，其对于n<=100的数据来说显然是可以全部通过的。
    另外，通过那个状态转移方程，我们可以发现e_max[i][j]是由e_max[i][k]和e_max[k+1][j]转移而来的，由于k<j、j<=j、i>=i、k+1>i，所以先自小到大枚举j再自大到小枚举i对写出程序来说方便了很多。
*/

/*
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main() {
    ifstream fin ("file.in");
    ofstream fout ("energy.out");
    int n,e[201],e_max[201][201],ans=0;
    fin >> n;
    for (int i=1;i<=n;i++) {
        fin >> e[i];
        e[i+n]=e[i];
    }
    memset(e_max,0,sizeof(e_max));
    for (int i=2;i<n+n;i++) for (int j=i-1;j>=1 && i-j<n;j--) {
        for (int k=j;k<i;k++) {
            int tem=e_max[j][k]+e_max[k+1][i]+e[j]*e[k+1]*e[i+1];
            if (tem>e_max[j][i]) e_max[j][i]=tem;
        }
        if (e_max[j][i]>ans) ans=e_max[j][i];
    }
    fout << ans << endl;
    fin.close();
    fout.close();
    return 0;
}
*/
/*
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
    int n,ans=0;
    ifstream cin("input.cin");
    cin>>n;
    int maxa[201][201];
    int *e=new int[n*2+1];
    for(int i=1;i<=n;i++){
        cin>>e[i];
        e[n+i]=e[i];
    }
    for(int l=2;l<2*n;l++){
        for(int b=l-1;b>0&&l-b<n;b--){
            for(int i=b;i<l;i++){
                int s=maxa[b][i]+maxa[i+1][l]+e[b]*e[i+1]*e[l+1];
                if(s>maxa[b][l])
                    maxa[b][l]=s;
                if(ans<maxa[b][l])
                    ans=maxa[b][l];
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}

*/
