#include<stdio.h>
#include<math.h>
int main ()
{
    int i,x,y;
    for(i=1;i<100000;i++)
    {
        x=(int)sqrt(i+100);
        y=(int)sqrt(i+168);
        if(x*x==(i+100)&&y*y==(i+168))
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
