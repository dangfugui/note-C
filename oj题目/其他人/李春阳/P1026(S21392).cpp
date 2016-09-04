#include"iostream"
#include"algorithm"
using namespace std;
bool comp(int a,int b)
{
        if(a>b)
                return false;
        return true;
}
int main()
{
        long long n;
        int c[110000]={0};
        int a[110000]={0},b[110000]={0};
        cin>>n;
        for(int i=0;i<n;i++)
        {
                cin>>a[i]>>b[i];
        }
        sort(b,b+n,comp);
        int sum1=0,sum2=0;
        for(int q=0;q<n;q++)
        {
                for(int w=0;w<n;w++)
                {
                        if(c[w]==1)
                        {
                                continue;
                        }else
                        {
                                if(b[w]>a[q])
                                {
                                        sum1++;
                                        c[w]=1;
                                        break;
                                }
                        }
                        if(w==n-1&&b[w]<a[q])
                        {
                                sum2++;
                        }
                }
        }
        if(sum1==sum2)
        {
                cout<<"DRAW"<<endl;
        }else if(sum2>sum1)
        {
                cout<<"LOSE"<<endl;
        }else if(sum2<sum1)
        {
                cout<<"WIN"<<endl;
        }
        return 0;
}
