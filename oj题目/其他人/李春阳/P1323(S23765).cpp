#include"iostream"
using namespace std;
int gcd(long long a,long long b)
{
        long long max=(a>b)?a:b;
        long long min=(a<b)?a:b;
        if(min==0)
                return max;
        while(min>0)
        {
                int temp=max%min;
                max=min;
                min=temp;
        }
        return max;
}
int main()
{
        int t;
        cin>>t;
        int n,k;
        for(int i=1;i<=t;i++)
        {
                cin>>n>>k;
                long long num1=1,num2=1;
                for(int j=0;j<k;j++)
                {
                        num1*=2;
                        num2*=2;
                }
                num1-=k+1;
                long long x=gcd(num1,num2);
                if(x>=2)
                {
                        cout<<"Case #";
                        cout<<i<<": "<<num1/x<<"/"<<num2/x<<endl;
                }else
                {
                        cout<<"Case #";
                        cout<<i<<": "<<num1<<"/"<<num2<<endl;
                }
        }
        return 0;
}
