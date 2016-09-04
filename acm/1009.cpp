#include<iostream>
using namespace std;
main()
{
    int a,b,c,d,i,n=0;
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        cin>>d;
        if(d>b)
        {
            n=d+n;
        }
    }
    cout<<n<<endl;
    return 0;
}
