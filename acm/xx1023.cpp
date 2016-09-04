#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,num=0;
    int wei[5]={0,0,0,0,0,};
    cin>>a;
    for(int i=4;i>0;i--)
    {
        wei[i]=a/pow(10.0,i-1);
        a=a-wei[i]*pow(10.0,i-1);
    }
    cout<<wei[4]*10+wei[3]+wei[2]/5+wei[2]%5+wei[1]/5+wei[1]%5<<endl;
    return 0;
}
