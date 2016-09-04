#include"iostream"
using namespace std;
long long res[1100][1100]={0};
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    res[1][1]=1;
    res[2][1]=2;
    res[2][2]=1;
    for(int i=3;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
        {
            if(j==1)
            {
                res[i][j]=i;
                continue;
            }
            res[i][j]=(res[i-1][j]+res[i-1][j-1]);
        }
    }
    if(b==0&&d==0)
    {
            cout<<1<<endl;
            return 0;
    }
    if(b==0)
    {
            cout<<res[c][d]<<endl;
            return 0;
    }
    if(d==0)
    {
            cout<<res[a][b]<<endl;
            return 0;
    }
    cout<<res[a][b]*res[c][d]<<endl;
    return 0;
}
