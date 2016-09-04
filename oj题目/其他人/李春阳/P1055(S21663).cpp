#include"iostream"
#include"cstring"
using namespace std;
int main()
{
        int a[110][110];
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<m;j++)
                {
                        cin>>a[i][j];
                }
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<m;j++)
                {
                        int sum=0;
                        for(int k=0;k<m;k++)
                        {
                                if(a[i][k]==1){
                                        sum++;
                                }
                        }
                        for(int u=0;u<n;u++){
                                if(a[u][j]==1)
                                        sum++;
                        }
                        if(sum>max)
                                max=sum;
                }
        }
        cout<<max<<endl;
        return 0;
}
