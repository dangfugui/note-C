#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
    char x[1000],y[1000],z[1000];
    int next=0;
     cin>>x>>y;
    int a=strlen(x),b=strlen(y),a1=a,a2=a,b1=b,b2=b;
    int m=max(a,b);


    for(int i=0;i<m;i++,a--,b--)
    {
        if(a<=0)
        {
            z[i]=(+y[b-1]-'0'-+next)%10+'0';
            next=(y[b-1]-'0'+next)/10;
        }
        else if(b<=0)
        {
            z[i]=(+y[a-1]-'0'-+next)%10+'0';
            next=(y[a-1]-'0'+next)/10;
        }

        else
        {
            z[i]=(x[a-1]+y[b-1]-'0'-'0'+next)%10+'0';
            next=(x[a-1]+y[b-1]-'0'-'0'+next)/10;
        }
    }
    cout<<z;
}
