#include"iostream"
using namespace std;
int F(int x);
int main ()
{
    int n;
    cin>>n;
    cout<<F(n)<<endl;
    return 0;
}
int F(int x)
{
    if(x==1)
        return 1;
    else
        return x*F(x-1);
}
