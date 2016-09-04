#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

struct pe{
    char name[50];
    int n,y,r;
    };

bool bo(pe a,pe b)
{
    if(a.n>b.n)
    {
        return 0;
    }
    else if(a.n<b.n)
    {
        return 1;
    }
    if(a.y>b.y)
    {
        return 0;
    }
    else if(a.y<b.y)
    {
        return 1;
    }
    if(a.r>b.r)
    {
        return 0;
    }
    else if(a.r<b.r)
    {
        return 1;
    }
    if(strcmp(a.name,b.name)>0)
    {
        return 0;
    }
}

int main()
{
    int x;
    pe p[1005];
    cin>>x;
    for(int a=0;a<x;a++)
    {
        cin>>p[a].name;
        scanf("%d/%d/%d",&p[a].y,&p[a].r,&p[a].n);
    }
    sort(p,p+x,bo);
    for(int d=0;d<x;d++)
    {
        cout<<p[d].name<<endl;
    }
    return 0;

}

