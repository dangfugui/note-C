#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
char aa[105],bb[105];
char x[105],y[105];
int f(){
    int xx=0,yy=0;
    char a='+',b='+';
    if(aa[0]=='-')  a='-';
    if(bb[0]=='-')  b='-';
    if(a!=b)    return 0;
    for(int a1=0;aa[a1]!='/0';a1++){
        if(a1==0&&(aa[a1]=='+'||aa[a1]=='-'))   {continue;}
        if(aa[a1]=='0'&&aa[a1]!='*')            {continue;}
        if(aa[a1]=='0'&&a=='*')
        if((aa[a1]>'0'&&aa[a1]<='9')||(aa[a1]=='0'&&a=='*')){
            a='*';
            x[xx]=aa[a1];
            xx++;
        }

    }
    for(int a1=0;bb[a1]!='/0';a1++){
        if(a1==0&&(bb[a1]=='+'||bb[a1]=='-'))   {continue;}
        if(bb[a1]=='0'&&bb[a1]!='*')            {continue;}
        if(bb[a1]=='0'&&b=='*')
        if((bb[a1]>'0'&&bb[a1]<='9')||(bb[a1]=='0'&&b=='*')){
            b='*';
            y[yy]=bb[a1];
        yy++;
        }
    }
    if(strcmp(x,y)==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    char aa[105],bb[105];
    char str;

    while(cin>>aa>>bb){
        if(f()==0){
            cout<<"no"<<endl;
        }else{
            cout<<"yes"<<endl;
        }
    }

        return 0;
}
