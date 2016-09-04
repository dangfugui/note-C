#include"iostream"
#include"cstring"
using namespace std;
int x,y,z;
long count=0;
void fun(int sum, int q,int w)
{
        if(q==y&&w==z-1)
        {
                if(sum==1)
                {
                        count++;
                }
                return;
        }
        if(q<y)
                fun(sum*2,q+1,w);
        if(w<z-1)
                fun(sum-1,q,w+1);
}
int main()
{
        cin>>x>>y>>z;
        fun(x,0,0);
        cout<<count<<endl;
        return 0;
}
