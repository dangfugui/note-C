#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    char fun[999];
    while(gets(fun))
    {
        for(int i=0;fun[i]!='\0';i++)
        {
            if(i==0&&fun[i]>=97&&fun[i]<=122)
            {
                fun[i]-=32;
            }
            if((fun[i-1]<65||fun[i-1]>90)&&
               (fun[i-1]<97||fun[i-1]>122)&&
               fun[i]>=97&&fun[i]<=122)

            {
                fun[i]-=32;
            }
        }
        puts(fun);

    }
    return 0;
}
