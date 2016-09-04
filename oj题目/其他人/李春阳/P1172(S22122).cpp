#include"iostream"
using namespace std;
int main()
{
        int n;
        int num[110]={0};
        cin>>n;
        for(int i=0;i<n;i++)
                cin>>num[i];
        int up[110],down[110];
        for(int i=0;i<110;i++)
        {
                up[i]=1;
                down[i]=1;
        }
        for(int i=1;i<n;i++)
        {
                int temp=-1;
                for(int j=i-1;j>=0;j--)
                {
                        if(num[i]>num[j])
                        {
                               if(up[j]>temp)
                               {
                                        up[i]=up[j]+1;
                                     temp=up[j];
                               }
                        }
                }
        }
        for(int i=n-1;i>=1;i--)
        {
                int temp=-1;
                for(int j=i+1;j<=n-1;j++)
                {
                        if(num[i]>num[j])
                        {
                                if(down[j]>temp)
                                {
                                        temp=down[j];
                                        down[i]=down[j]+1;
                                }
                        }
                }
        }
        int min=9999;
        for(int i=0;i<n;i++)
        {
                if((n-(up[i]+down[i]-1))<min)
                {
                        min=n-(up[i]+down[i]-1);
                }
        }
        cout<<min<<endl;
        return 0;
}
