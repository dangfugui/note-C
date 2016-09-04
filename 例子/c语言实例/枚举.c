#include<stdio.h>
int main ()
{
    enum example{red,orange,yellow,green,qing,blue,purple};
    enum example colour;
    int x;
    for(x=red;x<=purple;x++)
    {
         printf("%d\n",x);//enum指定的值全为int值
    }
}
