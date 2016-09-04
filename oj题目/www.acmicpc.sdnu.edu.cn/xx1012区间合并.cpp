# include "iostream"
using namespace std;
int main()
{
    int n,m;

    cin>>n;
    m=n;
    int fun[9999][2];
    for(int i=0;i<n;i++)
    {
        cin>>fun[i][0]>>fun[i][1];
    }
    for(int a=n-1;a>0;a--)
    {
        for(int b=0;b<a;b++)
        {
            if(fun[a][0]>=fun[b][1]||fun[a][1]<=fun[b][0])
            {
                continue;
            }
            else
            {
                fun[b][0]=(fun[b][0]<fun[a][0]?fun[b][0]:fun[a][0]);
                fun[b][1]=(fun[b][1]>fun[a][1]?fun[b][1]:fun[a][1]);
                m=m-1;
                break;
            }
        }
    }
    cout<<m<<endl;
    return 0;

}
