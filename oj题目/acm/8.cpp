#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
long find(long x){
    if(x%2==1)  return 2;
    if(x%3==0)  return 3;
    if(x%4==2)  return 4;
    if(x%5==0)  return 5;
    return -1;
}

int main(){
        long n;
        while(cin>>n){
            cout<<find(n)<<endl;
        }

        return 0;
}
