
#include<iostream>
using namespace std;
int main()
{

    long long n,i,z=0;
    long long fun[1000002]={0,1,1};
    cin>>n;
    for(i=3;i<=n;i++)
    {
        fun[i]=(fun[i-1]+fun[i-2])%10007;
    }

    cout<<fun[n]<<endl;

    return 0;
}
