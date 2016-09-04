#include"iostream"
using namespace std;
int main ()
{
    int a,b,c,sum=0;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        while(cin>>b)
        {
            for(int j=1;j<=b;j++)
            {
                cin>>c;
                sum+=c;
            }
            cout<<sum<<endl<<endl;
            sum=0;
        }
    }
    return 0;

}