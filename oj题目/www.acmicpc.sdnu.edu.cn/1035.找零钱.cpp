#include<iostream>
using namespace std;
int main()
{
    int n,num=0;
    cin>>n;
    int fun[n][4];
    for(int a=0;a<=n/10;a++)
    {
        for(int b=0;b<=n/5;b++)
        {
            for(int c=0;c<=n;c++)
            {
                if(10*a+5*b+c==n)
                {
                    num++;
                }
            }
        }
    }
    cout<<num<<endl;
    return 0;
}
