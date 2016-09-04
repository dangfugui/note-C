#include<iostream>
using namespace std;
int main()
{
    int n=0,a=0,b=0,c=0,d=0,e=0;
    cin>>n;
    int fun[n+1];
    for(a=0;a<n;a++)
    {
        cin>>fun[a];
    }
    for(b=0;b<n;b++)
    {
        for(c=0;c<n-b;c++)
        {
            if(fun[c]>=fun[c+1])
            {
                d=fun[c];
                fun[c]=fun[c+1];
                fun[c+1]=d;
            }
        }
    }
    for(e=0;e<n;e++)
        {
        cout<<fun[e]<<' ';
        }
    //cout<<fun[n-1]<<endl;
    return 0;
}

