#include"iostream"
using namespace std;
int main ()
{
    int a,b,c,count=0;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        cin>>c;
        if(c>b)
            count+=c;
    }
    cout<<count;
    return 0;
}
