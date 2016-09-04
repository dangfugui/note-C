#include"iostream"
using namespace std;
int main ()
{
    long n,z,l;
    cin>>n;
    cin>>z>>l;
    long x=0,y=0;
for(int i=1;i<=n;i++)
{
    if(i%z==0&&i%l!=0)
        x++;
    if(i%z!=0&&i%l==0)
        y++;
    if(i%z==0&&i%l==0)
        x++;
}
cout<<x<<" "<<y<<endl;
return 0;
}
