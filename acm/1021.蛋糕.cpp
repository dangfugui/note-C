#include<iostream>
using namespace std;
int main()
{
    int n,x,y,a=0,b=0;
    cin>>n;
    cin>>x>>y;

    for(int i=1;i<=n;i++)
    {
        if(i%x==0)
        {
            a++;
            continue;
        }
        else if(i%y==0)
        {
            b++;
            continue;
        }

    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
