#include"iostream"
#include"cmath"
using namespace std;
int main()
{
        long a,b,c;
        cin>>a>>b>>c;
        if(b==0)
        {
                cout<<0<<endl;
                return 0;
        }
        
        long long res=b;
        long long tt=1;
        for(long i=0;i<a;i++)
                tt*=c;
        res=res*(1-tt);
        res/=(1-c);
        cout<<res<<endl;
        return 0;
}
