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
        int n;
        int a[110];
        cin>>n;
        for(int i=0;i<n;i++)
                cin>>a[i];
        int b[101];
        int index=1;
        b[0]=a[0];
        for(int i=1;i<n;i++)
        {
                bool flag=true;
                for(int j=0;j<index;j++)
                {
                        if(a[i]==b[j])
                        {
                                flag=false;
                                break;
                        }
                }
                if(flag)
                        b[index++]=a[i];
        }
        sort(b,b+index,comp);
        cout<<index<<endl;
        for(int j=0;j<index;j++)
        {
                cout<<b[j];
                if(j!=index-1)
                        cout<<" ";
        }
        cout<<endl;
        return 0;
}
