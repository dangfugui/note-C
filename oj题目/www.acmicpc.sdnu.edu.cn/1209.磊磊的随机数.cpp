#include<iostream>
#include<algorithm>
using namespace std;
int pd(int a,int b){
        if(a<b) return 1;
        else return 0;
}
int main(){
        int n,t;
        cin>>n;
        t=n;
        int *num=new int[n+1];
        for(int a=0;a<n;a++)    cin>>num[a];
        sort(num,num+n,pd);
        for(int b=0;b<n-1;b++){
                if(num[b]==num[b+1]){
                        num[b]=999999;
                        t--;
                }
        }
        sort(num,num+n,pd);
        cout<<t<<endl;
        for(int a=0;a<t-1;a++)    cout<<num[a]<<" ";
        cout<<num[t-1]<<endl;
        return 0;
}
