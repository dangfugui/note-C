#include"iostream"
using namespace std;
#include"cstring"
int main ()
{
    int a,b;
    cin>>a>>b;
    string x[10002];
    string y[1002];
    for(int i=0;i<a;i++)
    {
        cin>>x[i];
    }
    for(int j=0;j<b;j++)
    {
        cin>>y[j];
    }
    for(int k=0;k<b;k++)
    {
        int q=0;
        for(int l=0;l<a;l++)
        {
            if(y[k]==x[l])
            {
            cout<<"YES"<<endl;
            break;
            }
            else
            q++;
            if(q==a)
                cout<<"NO"<<endl;

        }
    }
    return 0;
}
