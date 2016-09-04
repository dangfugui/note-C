#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,x;
    for(int t=1000;t<=9999;t++)
    {
        x=t;
        a=x/1000;
        x-=a*1000;
        b=x/100;
        x-=b*100;
        c=x/10;
        x-=c*10;
        d=x;
        if(a==d&&b==c)
            cout<<t<<endl;
    }
    return 0;
}
