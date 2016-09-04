#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
        int n;
        while(cin>>n){
                        int min=999999;
                for(int i=0;i<n;i++){
                        int a;
                        cin>>a;
                        if(a<min)
                                min=a;
                }
                if(min<4||min%4!=0)
                        cout<<"yes"<<endl;
                else
                        cout<<"no"<<endl;

        }
        return 0;
}
