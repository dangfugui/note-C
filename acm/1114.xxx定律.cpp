#include<iostream>
using namespace std;
int main()
{
    int n,num=0,m;
    while(cin>>m)
    {
        n=m;
        num=0;

        if(m==0)
        {
            return 0;
        }
        for(num=0;n!=1;)
        {
            if(n%2==0)
            {
                n=n/2;
                num++;
            }
            else
            {
                n=(3*n+1)/2;
                num++;
            }
        }
        cout<<num<<endl;
    }
}
