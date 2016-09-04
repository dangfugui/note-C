#include"iostream"
using namespace std;
//#include"algorithm"
#include"malloc.h"
#include"cmath"
struct node
{
        long a;
        long b;
};
bool comp(node n1,node n2)
{
        if(n1.a<n2.a)
        {
                return false;
        }
        return true;

}
#define ee 1e-6
void test()
{
        struct node* nn;
        double n;
        cin>>n;
        long max=(long)n/1.9;
        long count=0;
        nn=(struct node*)malloc(sizeof(struct node)*max*max);
        for(long i=1;i<=max;i++)
        {
                //cout<<i<<endl;
                for(long j=1;j<=max;j++)
                {
                        double dd=i*2.3+j*1.9;
                        if(abs(dd-n)<ee)
                        {
                                nn[count].a=i;
                                nn[count].b=j;
                                count++;
                        }
                }
        }
        //sort(nn,nn+count,comp);
        if(count==0)
        {
                cout<<"No Solution"<<endl;
        }else
        {
                for(long i=count-1;i>=0;i--)
        {
                cout<<nn[i].a<<" "<<nn[i].b<<endl;
        }
        }
}
int main()
{
       // while(true)
        //{
                test();
       // }
        return 0;
}
