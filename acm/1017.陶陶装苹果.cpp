#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,n,i,m=0,num=0;

    cin>>i;
    cin>>n;
    int fun[9999];
    for(a=0;a<n;a++)
    {
        cin>>fun[a];
    }
    for(b=0;b<n;b++)
    {
        for(c=0;c<n-1;c++)
        {
            int x;
            if(fun[c]>fun[c+1])
            {
                x=fun[c];
                fun[c]=fun[c+1];
                fun[c+1]=x;
            }
        }
    }
    for(d=0;d<n;d++)
    {
        m+=fun[d];
        if(m>i)
        {
            break;
        }
            num++;
    }
    cout<<num<<endl;
    return 0;
}
