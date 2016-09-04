#include<iostream>
using namespace std;
void ex(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int a,b;
    int *d,*f;
    cin>>a>>b;
    d=&a;
    f=&b;
    ex(d,f);
    cout<<a<<endl<<b<<endl;
    return 0;
}
