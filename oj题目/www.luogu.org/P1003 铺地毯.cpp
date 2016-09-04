#include<iostream>
using namespace std;
int main(){
    //ifstream cin("carpet.in");
   // ofstream cout("carpet.out");
    int n,a,b,g,k;
    cin>>n;
    int *x=new int[n+5];
    int *y=new int[n+5];
    int *xx=new int[n+5];
    int *yy=new int[n+5];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>g>>k;
        xx[i]=x[i]+g;
        yy[i]=y[i]+k;
    }
    int fx,fy;
    cin>>fx>>fy;
    int i=n-1;
    for(;i>=0;i--){
        if(fx>=x[i]&&fx<=xx[i]&&fy>=y[i]&&fy<=yy[i]){
            cout<<i+1<<endl;
            break;
        }
    }
    if(i==-1)
        cout<<-1<<endl;
    return 0;
}

/*P1003 铺地毯
题目描述 Description
　　为了准备一个独特的颁奖典礼，组织者在会场的一片矩形区域（可看做是平面直角坐标系的第一象限）铺上一些矩形地毯。一共有 n 张地毯，编号从 1 到n 。现在将这些地毯按照编号从小到大的顺序平行于坐标轴先后铺设，后铺的地毯覆盖在前面已经铺好的地毯之上。
　　地毯铺设完成后，组织者想知道覆盖地面某个点的最上面的那张地毯的编号。注意：在矩形地毯边界和四个顶点上的点也算被地毯覆盖。
 输入输出格式 Input/output
输入格式：
　　输入文件名为carpet.in 。
　　输入共n+2 行。
　　第一行，一个整数n ，表示总共有 n 张地毯。
　　接下来的n 行中，第 i+1 行表示编号i 的地毯的信息，包含四个正整数 a ，b ，g ，k ，每两个整数之间用一个空格隔开，分别表示铺设地毯的左下角的坐标（a ，b ）以及地毯在x轴和y 轴方向的长度。
　　第n+2 行包含两个正整数 x 和y，表示所求的地面的点的坐标（x ，y）。
输出格式：
输出文件名为carpet.out 。
输出共1 行，一个整数，表示所求的地毯的编号；若此处没有被地毯覆盖则输出-1 。*/
