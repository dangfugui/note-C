#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream cout("1084out.txt");
    long long num[100005]={0,1,2,4};
    int n=1,big=4;
    while(n<1000){
        if(n<big){
            cout<<num[n]<<endl;
        }else{
            for(int a=big;a<=n;a++){
                num[a]=(num[a-1]+num[a-2]+num[a-3]) ;
                 num[a]%= 1000000007;
            }
            big=n;
            cout<<num[n]<<endl;
        }
        n++;
    }
    return 0;
}

