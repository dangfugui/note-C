#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
struct DNA{
    char str[101];
    int v;
    int id;
};
int pd(DNA a,DNA b){
    if(a.v<b.v) return 1;
    else if(a.v==b.v){
        if(a.id<b.id)   return 1;
        else return 0;
    }else   return 0;
}
int main(){
    int n,m;
    cin>>n>>m;
    DNA *d=new DNA[n+1];
    for(int a=0;a<m;a++){
        cin>>d[a].str;
        d[a].id=a;
        int sum=0;
        for(int b=0;b<strlen(d[a].str)-1;b++){
            for(int c=b+1;c<strlen(d[a].str);c++){
                if(d[a].str[b]>d[a].str[c]){
                    sum++;
                }
            }
        }
        d[a].v=sum;
        //cout<<d[a].v<<endl;
    }
    sort(d,d+m,pd);
    for(int i=0;i<m;i++){
        cout<<d[i].str<<endl;
    }
    return 0;
}
