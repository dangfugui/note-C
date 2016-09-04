#include"iostream"
using namespace std;
int main ()
{
    int m,n;
    int a[2001];
    cin>>m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int j=1;j<n;j++)
    {
        for(int k=1;k<n;k++)
        {
            int temp;
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    int sum=0;
    for(int s=1;s<=n;s++)
    {
        sum+=a[s];
       if(sum==m)
       {
           cout<<s;
           break;
       }
       if(sum>m)
       {
           cout<<s-1<<endl;
           break;

       }
       if(s==n&&sum<m)
       {
           cout<<n<<endl;
           break;
       }
    }
    return 0;
}

