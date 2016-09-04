#include<cmath>
#include<iostream>
using namespace std;
main()
{

    int x,m,n,b,sun=0;
    cin>>x;
    n=x;
    int fun[11]={0,0,0,0,0,0,0,0,0,0,0};
    for(int i=1;i<=x;i++)
    {
        n=i;
        for(int a=5;a>0;a--)
        {
            fun[a]=n/pow(10.0,a-1);
            n=n-fun[a]*pow(10.0,a-1);
        }
        for(int f=1;f<6;f++)
        {
            if(fun[f]==1)
            {
                sun++;
            }
        }
    }
    cout<<sun<<endl;
    return 0;
}
