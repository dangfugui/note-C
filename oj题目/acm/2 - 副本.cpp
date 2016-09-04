//1027.马踏飞燕(续) http://www.acmicpc.sdnu.edu.cn/Problem.aspx?pid=1027
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
char bo='N';
int find(int x,int y,int xx,int yy,int depth){
        if(depth>3){
                return 0;
        }else if(x==xx&&y==yy){
                bo='Y';
                return 1;
        }
        else if( x>xx+8||xx>x+8||y>yy+8||yy>y+8){
                return 0;
        }else{
                fgind(x-1,y-2,xx,yy,depth+1);
                find(x+1,y-2,xx,yy,depth+1);
                find(x-2,y-1,xx,yy,depth+1);
                find(x+2,y-1,xx,yy,depth+1);
                find(x-2,y+1,xx,yy,depth+1);
                find(x+2,y+1,xx,yy,depth+1);
                find(x-1,y+2,xx,yy,depth+1);
                find(x+1,y+2,xx,yy,depth+1);
        }

}
int main(){
        int x1,y1,x2,y2;
        cin>>x1>>y1;
        cin>>x2>>y2;
        if(x1>x2+8||x2>x1+8||y1>y2+8||y2>y1+8){
                cout<<'N'<<endl;
                return 0;
        }
        find(x1,y1,x2,y2,0);
        cout<<bo<<endl;
        return 0;
}
