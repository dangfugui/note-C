#include<iostream>
using namespace std;
int main(){
        int n,m;
        cin>>n>>m;
        int ans=0;
        int **mp=new int*[n+2];
        for(int a=0;a<n+1;a++){
                mp[a]=new int[m+1];
        }
        for(int b=0;b<n;b++){
                for(int c=0;c<m;c++){
                        cin>>mp[b][c];
                }
        }
        //cout<<mp[2][3];
        for(int d=0;d<n;d++){
                for(int e=0;e<m;e++){
                        int sum=0;
                        for(int f=0;f<n;f++){
                                sum+=mp[f][e];
                        }
                        for(int g=0;g<m;g++){
                                sum+=mp[d][g];
                        }
                        if(sum>ans){
                                ans=sum;
                        }
                }
        }
        cout<<ans<<endl;
        return 0;
}
