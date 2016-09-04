#include<stdio.h>
#include"algorithm"
using namespace std;
 
bool pan(int e,int f)
{
    if(e>f)
        return 1;
    else
        return 0;
}
int main()
{
    int n,i;
    scanf("%d %d",&n,&i);
    int *p=new int[n];
    for(int a=0;a<n;a++)
        scanf("%d",&p[a]);
    sort(p,p+n,pan);
    printf("%d\n",p[i-1]);
    return 0;
}