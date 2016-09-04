#include"iostream"
using namespace std;
long res[1100][1100]={0};
int main()
{
    int c,n,k;
    cin>>c;
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
            res[i][j]=(res[i-1][j]+res[i-1][j-1])%10000003;
        }
    }
    while(c--)
    {
        cin>>n>>k;
        if(k==0)
        {
            cout<<1<<endl;
            continue;
        }
        cout<<res[n][k]<<endl;
    }
    return 0;
}
