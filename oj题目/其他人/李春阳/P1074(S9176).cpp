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
  if(x<=2)
return 1;
else
return F(x-1)+F(x-2);
}