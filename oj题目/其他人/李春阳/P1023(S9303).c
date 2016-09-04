#include<stdio.h>
int main( )
{


    int a,m,n,sum=0;
    scanf("%d",&a);
    m=a/100;
    n=a%100;
    sum=sum+m;
    m=n/50;
    n=n%50;
    sum=sum+m;
   m=n/10;
n=n%10;
sum=sum+m;
m=n/5;
n=n%5;
sum=sum+m;
sum=sum+n;
printf("%d",sum);
return 0;
}
