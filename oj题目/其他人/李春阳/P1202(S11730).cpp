#include<iostream>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    for(int a=0;a<n;a++)
    {
        cin>>x>>y;
        if(x==y&&x%2==0)
        {
            cout<<2*x<<endl;
        }
        else if(x==y&&x%2!=0)
        {
            cout<<2*x-1<<endl;
        }
        else if(x-y==2&&x%2==0)
        {
            cout<<2*x-2<<endl;
        }
        else if(x-y==2&&x%2!=0)
        {
            cout<<2*x-3<<endl;
        }
        else
            cout<<"No Number"<<endl;
    }
    return 0;
}