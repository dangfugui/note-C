#include"iostream"
using namespace std;
int main ()
{
   int n,a,count=0;
cin>>n;
while(cin>>a)
{
  if(a<=n+30)
  count++;
}
cout<<count<<endl;
return 0;
}