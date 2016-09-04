#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int da(int x1,int x2)
{
    if(x1>x2)
        return 1;
    else
        return 0;
}
int main()
{
    long n,m;
    int f[100010];
    while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;
        for(int a=0;a<n;a++)
        {
            cin>>f[a];
        }
        sort(f,f+n,da);
     
        cout<<f[m-1]<<endl;
    }
    return 0;
}