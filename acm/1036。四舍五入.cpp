#include<iostream>
using namespace std;
int main()
{
    float a,b;
    int x,y;

    cin>>a;
    x=(int)a;
    b=a-x;
    if(b>=0.5)
    {
        cout<<x+1<<endl;
    }
    else
    {
        cout<<x<<endl;
    }
    return 0;
}
