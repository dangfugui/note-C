#include"iostream"
#include"cstdio"
#include"algorithm"
using namespace std;
struct river
{
        int p;
        int l;
        int v;
};
bool comp(struct river r1,struct river r2)
{
        if(r1.p>r2.p)
                return false;
}
int main()
{
        int n,k;
        struct river r[155];
        int count=1;
        while(cin>>n>>k)
        {
                if(n==0&&k==0)
                        return 0;
                for(int i=0;i<n;i++)
                {
                        cin>>r[i].p>>r[i].l>>r[i].v;
                }
                double res=0.0;
                if(n==0)
                {
                        res=k;
                        cout<<"Case "<<count<<": ";
                        count++;
                        printf("%.3f\n\n",res);
                        continue;
                }
                double now=0;
                sort(r,r+n,comp);
                for(int j=0;j<n;j++)
                {
                        res+=((double)r[j].p-now)+2*(double)r[j].l/(double)r[j].v;
                        now=r[j].p+r[j].l;
                }
                res+=(double)k-now;
                cout<<"Case "<<count<<": ";
                count++;
                printf("%.3f\n\n",res);
        }
        return 0;
}
