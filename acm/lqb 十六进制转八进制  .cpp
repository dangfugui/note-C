#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    long x;
    string str;
    cin>>n;
    for(;n>0;n--)
    {
       cin>>str;
       int f[1000];
       for(int a=str.size()-1,b=0;a>=-1;a--,b++)
       {
           if(str[b]=='0')  {f[4*a+3]=0 ;f[4*a+2]=0 ;f[4*a+1]=0 ;f[4*a]=0 ;}
           if(str[b]=='1')  {f[4*a+3]=0 ;f[4*a+2]=0 ;f[4*a+1]=0 ;f[4*a]=1 ;}
           if(str[b]=='2')  {f[4*a+3]=0 ;f[4*a+2]=0 ;f[4*a+1]=1 ;f[4*a]=0 ;}
           if(str[b]=='3')  {f[4*a+3]=0 ;f[4*a+2]=0 ;f[4*a+1]=1 ;f[4*a]=1 ;}
           if(str[b]=='4')  {f[4*a+3]=0 ;f[4*a+2]=1 ;f[4*a+1]=0 ;f[4*a]=0 ;}
           if(str[b]=='5')  {f[4*a+3]=0 ;f[4*a+2]=1 ;f[4*a+1]=0 ;f[4*a]=1 ;}
           if(str[b]=='6')  {f[4*a+3]=0 ;f[4*a+2]=1 ;f[4*a+1]=1 ;f[4*a]=0 ;}
           if(str[b]=='7')  {f[4*a+3]=0 ;f[4*a+2]=1 ;f[4*a+1]=1 ;f[4*a]=1 ;}
           if(str[b]=='8')  {f[4*a+3]=1 ;f[4*a+2]=0 ;f[4*a+1]=0 ;f[4*a]=0 ;}
           if(str[b]=='9')  {f[4*a+3]=1 ;f[4*a+2]=0 ;f[4*a+1]=0 ;f[4*a]=1 ;}
           if(str[b]=='A')  {f[4*a+3]=1 ;f[4*a+2]=0 ;f[4*a+1]=1 ;f[4*a]=0 ;}
           if(str[b]=='B')  {f[4*a+3]=1 ;f[4*a+2]=0 ;f[4*a+1]=1 ;f[4*a]=1 ;}
           if(str[b]=='C')  {f[4*a+3]=1 ;f[4*a+2]=1 ;f[4*a+1]=0 ;f[4*a]=0 ;}
           if(str[b]=='D')  {f[4*a+3]=1 ;f[4*a+2]=1 ;f[4*a+1]=0 ;f[4*a]=1 ;}
           if(str[b]=='E')  {f[4*a+3]=1 ;f[4*a+2]=1 ;f[4*a+1]=1 ;f[4*a]=0 ;}
           if(str[b]=='F')  {f[4*a+3]=1 ;f[4*a+2]=1 ;f[4*a+1]=1 ;f[4*a]=1 ;}
        }
        /*for(int c=str.size()*4-1;c>=0;c--)
        {
            cout<<f[c]<<' ';
        }
        cout<<endl;*/
        int l;
        l=str.size()*4;
        if(str.size()*4%3==1)
        {
            l=l+2;
            f[l-2]=0;
            f[l-1]=0;
        }
        else if(str.size()*4%3==2)
        {
            l=l+1;
            f[l-1]=0;
        }
        int b=l-1;
        if(f[b]==0&&f[b-1]==0&&f[b-2]==0)
        {
            b=b-3;
        }

       for(;b>=-1;b=b-3)
        {
            if(f[b]==0&&f[b-1]==0&&f[b-2]==0)    {cout<<0;}
            if(f[b]==0&&f[b-1]==0&&f[b-2]==1)    {cout<<1;}
            if(f[b]==0&&f[b-1]==1&&f[b-2]==0)    {cout<<2;}
            if(f[b]==0&&f[b-1]==1&&f[b-2]==1)    {cout<<3;}
            if(f[b]==1&&f[b-1]==0&&f[b-2]==0)    {cout<<4;}
            if(f[b]==1&&f[b-1]==0&&f[b-2]==1)    {cout<<5;}
            if(f[b]==1&&f[b-1]==1&&f[b-2]==0)    {cout<<6;}
            if(f[b]==1&&f[b-1]==1&&f[b-2]==1)    {cout<<7;}
        }
        cout<<endl;
    }
    return 0;
}
