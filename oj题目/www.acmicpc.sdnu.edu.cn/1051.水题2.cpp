#include<string>
#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
    char x[55]="n 55!w ! pue n a^o7 ! n paau !";
    char y[55]="i need u i love u and i miss u";
    for(int a=0;a<=29;a++)
    {
        printf("%4d --- %c%4d to %c%4d     %3d\n",a,x[a],x[a],y[29-a],y[29-a],x[a]-y[29-a]);
    }



}
