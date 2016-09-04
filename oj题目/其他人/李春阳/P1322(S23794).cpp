#include"iostream"
#include"cstdio"
#include"cmath"
using namespace std;
#define e 2.718281828459
#define l 1e-8
int main()
{
        int n;
        cin>>n;
        double a,b,s;
        for(int i=1;i<=n;i++)
        {
                cin>>a>>b>>s;
                if((a*b)<s||(s-a*b<0.0000000001&&a*b-s<0.0000000001))
                {
                        cout<<"0.000000%"<<endl;
                        continue;
                }
                if(s<=l)
                {
                        cout<<"100.000000%"<<endl;
                        continue;
                }
                double zhengfangxing=(a-s/b)*b;
                double ssss=s*(log(a)-log(s/b));
                double ans=(zhengfangxing-ssss)/(a*b)*100;
                printf("%.6f",ans);
                cout<<"%"<<endl;

        }
        return 0;
}
