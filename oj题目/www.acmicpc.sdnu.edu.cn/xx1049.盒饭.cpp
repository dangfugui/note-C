#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,e=2,f=1,n,m;
    cin>>n;
    cin>>m;
    for(a=1;a<pow(2.0,m);a++)
    {
        if(f>n)
        {
            f=1;
        }
        f=f+e;
        e++;
        if(f==m)
        {
            cout<<"Y"<<endl;
            return 0;
        }
    }
    cout<<"N"<<endl;
    return 0;
}
