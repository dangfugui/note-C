#include <iostream>
#include <algorithm>
using namespace std;
int function(char *p,int n)
{
    int count = 0;
    for(int i = 0;i < n;i++)
        for(int j = i + 1;j < n;j++)
        {
            if (*(p + i) > *(p + j))
            {
                count++;
            }
        }
    return count;
}
typedef struct SHU
{
    int num;
    int count;
}paixu;
int cmp(struct SHU a,struct SHU b )
{
    if( a.count > b.count )
       return 0;
    else if(a.count == b.count && a.num > b.num)
       return 0;
    else
       return 1;
}
int main()
{
    char str[101][101] = {0};
    int n,m;
    paixu shu[101];
    cin>>n>>m;//n shi chang du
    for (int i = 0;i < m;i++)
    {
        cin>>str[i];
    }
    for(int g =0;g < m;g++)
    {
        shu[g].count = function(str[g],n);
        shu[g].num = g;
    }
    sort(shu,shu + m,cmp);
    for(int k = 0;k < m;k++)
    {
        cout<<str[shu[k].num]<<endl;
    }
    return 0;
}
