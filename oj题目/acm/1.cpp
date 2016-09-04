#include<iostream>
using namespace std;
int main(){
   // ifstream cin("input/1.txt");
    long long n,m,k,x;
    cin>>n>>m>>k>>x;
    long long ans;
    long long pow=1;
    k=k%n;
    while(k--){
        pow=(((10*pow)%n)*m)%n;
    }

        x=(x+pow)%n;

    cout<<x<<endl;
        return 0;
}
