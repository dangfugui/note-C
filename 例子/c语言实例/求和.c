#include<stdio.h>
int F(int n);
int main ()
{
    int num[20];
    int i=1,j,k;
    float sum=0;

    for(j=0;j<20;j++)
    {
        num[j]=F(j);
        sum+=(j+1)/num[j];

    }
    printf("%3f",sum);
    return 0;
}
 int F(int n)
{
    if(n==0)
    return 1;
    if(n==1)
        return 2;
    if(n>=2)
        return F(n-1)+F(n-2);
}
