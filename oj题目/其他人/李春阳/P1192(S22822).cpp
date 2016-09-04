#include<iostream> 
using namespace std; 
int main() 
{ 
    char q[105]; 
    int num[50],da=0,xi=100; 
    for(int b=0;b<50;b++) 
    { 
        num[b]=0; 
    } 
    cin>>q; 
    for(int a=0;q[a]!='\0';a++) 
    { 
        num[q[a]-'a']++; 
    } 
    for(int c=0;c<50;c++) 
    { 
        if(num[c]>da) 
            da=num[c]; 
        if(num[c]!=0&&num[c]<xi) 
            xi=num[c]; 
    } 
    int x=da-xi; 
    if(x<2) 
    {cout<<"No Answer"<<endl<<0<<endl; 
    return 0;} 
   
    for(int e=2;e<x;e++) 
    { 
        if(x%e==0) 
        { 
            cout<<"No Answer"<<endl<<0<<endl; 
            return 0; 
        } 
    } 
    cout<<"Lucky Word"<<endl; 
    cout<<x<<endl; 
    return 0; 
}