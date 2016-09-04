#include<iostream>
using namespace std;
int main()
{
    int x,big,m,litte;
    while(cin>>x)
    {
        if(x==0)    break;
        for(int a=0;a<x;a++)
        {
            cin>>m;
            if(a==0)
            {
                big=m;
                litte=m;
            }
            if(m>big)
                big=m;
            if(m<litte)
                litte=m;
        }
        cout<<2*(big-litte)<<endl;

    }
    return 0;
}
