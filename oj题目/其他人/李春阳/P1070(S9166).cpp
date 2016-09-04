#include"iostream"
using namespace std;
void CHANGE(int*,int*);
int main ()
{
    int a,b;
    cin>>a>>b;
    CHANGE(&a,&b);
    cout<<a<<endl<<b<<endl;
    return 0;
}
void CHANGE(int*x,int*y)
{
    int p;
    p=*x;
    *x=*y;
    *y=p;
}
