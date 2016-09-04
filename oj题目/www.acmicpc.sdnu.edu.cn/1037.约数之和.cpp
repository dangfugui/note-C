#include<iostream>
using namespace std;
int main()
{
    int x,a,b,sum=0;
    cin>>x;
    for(a=1;a<=x;a++)
    {
        if(x%a==0)
        {
            sum+=a;
        }
    }
    cout<<sum<<endl;
    return 0;
}
