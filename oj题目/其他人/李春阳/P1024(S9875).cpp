#include"iostream"
using namespace std;
int main ()
{
    long n;
    cin>>n;
    long a,b,c,d,e;
    long count=0;
    for(int i=1;i<=n;i++)
    {
        a=i%10;
        b=((i%100)-a)/10;
        c=((i%1000)-(i%100))/100;
        d=((i%10000)-(i%1000))/1000;
        e=((i%100000)-(i%10000))/10000;
        if(a==1)
            count++;
        if(b==1)
            count++;
        if(c==1)
            count++;
        if(d==1)
            count++;
        if(e==1)
            count++;
    }
    cout<<count<<endl;
    return 0;
}
