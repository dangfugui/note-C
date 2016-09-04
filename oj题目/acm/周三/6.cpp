#include<iostream>
#include<algorithm>
using namespace std;

struct boy{
        long long year;
        char name[15];
        long long nl;
};
boy *b;
int f(boy a,boy b){
        if(a.year<b.year)
                return 1;
        else
                return 0;
}
int findyear(int bb,long long c,int ll){
        if(b[(ll-bb)/2].year<c&&c<b[(ll-bb+2)/2].year)
                return (ll-bb)/2;
        else{
              if(c<b[(ll-bb)/2].year) {
                findyear(bb,c,ll-bb);
              } else{
                findyear(ll-bb,c,ll);
              }
        }
}

int main(){
       int n;
       cin>>n;
        b=new boy[n];
        for(int a=0;a<n;a++){
                cin>>b[a].year>>b[a].name>>b[a].nl;
        }
        sort(b,b+n,f);
        int r;
        cin>>r;
        while(r--){
                long long x,y;
                cin>>x>>y;
                cout<<findyear(0,x,n);
        }

 /*       for(int a=0;a<n;a++){
                cout<<b[a].year<<b[a].name<<b[a].nl;
        }*/
        return 0;
}
