#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    char stx[10];
    int l;
    long sum=0;
    while(cin>>stx)
    {
        sum=0;
        l=strlen(stx)-1;
        while(l>=0)
        {
            if(stx[l]>=65)
                stx[l]-=7;
            sum+=(stx[l]-48)*pow(16,l);
            l--;
        }
        cout<<sum<<endl;
    }
    return 0;
}
