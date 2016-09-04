#include"iostream"
#include"algorithm"
using namespace std;
int a[110][110];
int fun(int x,int y,int len1,int len2)
{
        int sum=0;
        for(int i=x;i<x+len1;i++)
        {
                for(int j=y;j<y+len2;j++)
                {
                        sum+=a[i][j];
                }
        }
        //cout<<sum<<endl;
        return sum;
}
int main()
{
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                        cin>>a[i][j];
        }
        int max=0;
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        int len1=n-i;
                        int len2=n-j;
                        for(int q=1;q<=len1;q++)
                        {
                                for(int w=1;w<=len2;w++)
                                {
                                        int sum1=fun(i,j,q,w);
                                        if(sum1>max)
                                                max=sum1;
                                }
                        }
                }
        }
        cout<<max<<endl;
        return 0;
}
