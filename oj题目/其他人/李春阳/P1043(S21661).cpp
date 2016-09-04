#include <iostream>
using namespace std;
int max(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int tm,num;
    int flag;
    int time[1005]={0},val[1005]={0};
    cin>>tm>>num;
    for (int y=1;y<=num;y++)
    {
        cin>>time[y]>>val[y];
    }
    int fval[1005]={0};
    for (int i=1;i<=num;i++)
        for(int j=1;j<=tm;j++)
        {
            if (j>=time[i])
            {
                fval[j]=max(fval[j],fval[j-time[i]]+val[i]);
                flag=fval[tm];
            }
        }
        cout<<flag<<endl;
        return 0;
}
