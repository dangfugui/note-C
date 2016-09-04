#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    e=a*c-b*d;
    f=a*d+b*c;
    if(f==0)
        cout<<e<<endl;
    else if(e==0)
        cout<<f<<"i"<<endl;
    else if(f>=0)
        cout<<e<<"+"<<f<<"i"<<endl;
    else if(f<0)
        cout<<e<<f<<"i"<<endl;
    return 0;
}
