#include<stdio.h>
int main()
{
    char fun[1001];
    while(gets(fun))
    {
        for(int i=0;i<1001;i++)
        {
            if(fun[i]>='A'&&fun[i]<='Z')
            {
                fun[i]=fun[i]+32;
            }
        }
        puts(fun);
    }
    return 0;
}
