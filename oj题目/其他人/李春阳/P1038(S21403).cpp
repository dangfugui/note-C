#include"iostream"
#include"algorithm"
using namespace std;
#include"cstdio"
int max(int s,int d)
{
        if(s>d)
                return s;
        return d;
}
int main()
{
        int **a,**res;
        int n;
        scanf("%d",&n);
        a=new int*[n];
        res=new int*[n];
        for(int q=0;q<n;q++)
               {
                        a[q]=new int[n];
                        res[q]=new int[n];
               }

        for(int i=0;i<n;i++)
        {
                for(int j=0;j<n;j++)
                {
                        scanf("%d",&a[i][j]);
                        res[i][j]=0;
                }
        }
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<=i;j++)
                {
                        res[0][i]+=a[0][j];
                }
        }
        for(int i=0;i<n;i++)
        {
                for(int j=0;j<=i;j++)
                {
                        res[i][0]+=a[j][0];
                }
        }
        for(int q=1;q<n;q++)
        {
                for(int w=1;w<n;w++)
                {
                        res[q][w]=max(res[q-1][w]+a[q][w],res[q][w-1]+a[q][w]);
                }
        }
        cout<<res[n-1][n-1]<<endl;
        return 0;
}
