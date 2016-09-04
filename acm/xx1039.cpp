
#include<iostream>
using namespace std;
int main()
{
    int n,i,x=0;
    int fun[9999]={0,1,1};
    cin>>n;
    if(n==1||n==2)
    {
        i=1;
        cout<<i<<endl;
    }
    else
    {
        for(int a=3;a<=n;a++)
        {
            fun[a]=fun[a-1]+fun[a-2];

        }
    }
    cout<<fun[n]<<endl;

    return 0;
}
