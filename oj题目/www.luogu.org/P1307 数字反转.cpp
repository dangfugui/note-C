#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[15];
    char symbol='+';
    bool is=false;
    while(cin>>str){
        if(str[0]=='-')     cout<<'-';
        for(int a=strlen(str)-1;a>0;a--){
            if(str[a]!='0'){
                cout<<str[a];
                is=true;
            }else{
                if(is) {
                        cout<<str[a];
                }
            }
        }
        if(str[0]>='0'&&str[0]<='9'){
            cout<<str[0];
        }
        cout<<endl;
        is=false;
    }
    return 0;
}
