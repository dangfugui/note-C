﻿#include"iostream"
using namespace std;
int main ()
{
    int a[47];
    a[0]=1;
    a[1]=1;
    for(int i=2;i<=47;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    int n;
    cin>>n;
    cout<<a[n-1]<<endl;
    return 0;
}
