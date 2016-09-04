#include"iostream"
#include"algorithm"
using namespace std;
struct fun{
    int a;
    int b;
    int c;
    };
    fun x[100001];
bool pd(fun i1,fun i2)
{
    if(i1.b>i2.b)
        return 0;
    if(i1.b==i2.b&&i1.c>i2.c)
        return 0;
    else
        return 1;
     
}
int main()
{
 
 
    int t=0;
    while(cin>>x[t].a>>x[t].b)
    {
        t++;
        x[t].c=t;
    }
    sort(x,x+t,pd);
    for(int r=0;r<t;r++)
        cout<<x[r].a<<" "<<x[r].b<<endl;
    return 0;
}
