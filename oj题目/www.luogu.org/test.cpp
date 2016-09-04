#include<iostream>
#include<string.h>
using namespace std;
int main(){
    long ans=0;
    int n,no=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        no+=a+b-8;
        ans+=no;

       // cout<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
