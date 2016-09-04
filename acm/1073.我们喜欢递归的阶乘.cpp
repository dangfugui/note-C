#include<iostream>
using namespace std;

int jie(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return (a*jie(a-1));
    }
}
int main()
{
    int x;
    int jie(int a);
    cin>>x;
    cout<<jie(x)<<endl;
    return 0;
    }
