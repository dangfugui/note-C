#include"iostream"
#include"algorithm"
using namespace std;
bool comp(int a,int b)
{
        if(a<b)
                return false;
        return true;
}
int main()
{
        long n,m,x;
        long a[3000];
        cin>>n;
        long index=1;
        while(n--)
        {
                cin>>m>>x;
                for(int i=0;i<m;i++)
                        cin>>a[i];
                sort(a,a+m,comp);
                long res=0;
                bool flag=false;
                for(int j=0;j<m;j++)
                {
                        if(a[j]<=x)
                        {
                                flag=true;
                                res=j;
                                break;
                        }
                }
                if(!flag)
                        res=m;
                cout<<"Case "<<index<<":"<<res;
                if(index!=n)
                    cout<<endl<<endl;
                index++;
        }
        return 0;
}
