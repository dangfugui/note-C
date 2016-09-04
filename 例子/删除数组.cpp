#include<stdio.h>
int main ()
{
    int b=1;
    int a;
    float t;
    float c=0;
    for(a=1;a<=100;a++)
    {
        t=(float)b/a;
        c+=t;
        b=-b;
    }
    printf("The sum of 20 numbers is %f.",c);
    return 0;

}