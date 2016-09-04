#include<iostream>
using namespace std;
int main()
{
    int x,sum;
    sum=1;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        sum=sum*i;
    }
    cout<<sum<<endl;
    return 0;

}

