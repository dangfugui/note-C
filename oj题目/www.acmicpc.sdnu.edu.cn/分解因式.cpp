#include<stdio.h>
int main ()
{
    int a[6]={9,7,5,3,1};
    int n;
    scanf("%d",&n);
    for(int b=0;b<6;b++)
    {

        if(n<=a[b]&&n>=a[b+1])
        {
            for(int c=5;c>b+1;c--)
            {
                a[c]=a[c-1];
            }
         a[b+1]=n;
         break;
        }

   }
   for(int x=0;x<6;x++)
            printf("%d  ",a[x]);
        return 0;
}

