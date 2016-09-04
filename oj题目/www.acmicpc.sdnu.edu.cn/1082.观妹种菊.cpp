#include<iostream>
using namespace std;
int feibo(int a){
        if(a==1||a==2)return 1;
        else return feibo(a-1)+feibo(a-2);
}
int main(){
        int n,m;
        while(cin>>n>>m){
                cout<<feibo(m/2)*n<<endl;
        }
        return 0;
}
