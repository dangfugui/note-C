//1273.WY的矩阵
#include<iostream>
using namespace std;
int n;
int map[102][102];
int fun(int x,int y,int xx,int yy){
        int sum=0;
        for(int aa=x;aa<=xx;aa++){
                for(int bb=y;bb<=yy;bb++){
                        sum+=map[aa][bb];
                }
        }
        return sum;
}
int main(){
        int ans=-999;
        cin>>n;
       /* int **map=new int*[n+2];
        for(int a=0;a<n+2;a++){
                map[a]=new int[n+2];
        }*/
        for(int b=0;b<n;b++){
                for(int c=0;c<n;c++){
                        cin>>map[b][c];
                }
        }
       // fun(0,0,1,1);
        for(int x=0;x<n;x++){
                for(int y=0;y<n;y++){
                        for(int xx=x;xx<n;xx++){
                                for(int yy=y;yy<n;yy++){

                                        int aa=fun(x,y,xx,yy);
                                        if(aa>ans)      ans=aa;
                                }
                        }
                }
        }
        cout<<ans<<endl;
        return 0;
}
