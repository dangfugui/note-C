
#include<stdio.h>
#include<string.h>
//using namespace std;
int main()
{
    char fun[999];
    while(gets(fun))
    {
        for(int i=0;'\0'!=fun[i];i++)
        {
            if(i==0)
            {
                fun[i]-=32;
            }
            if(fun[i]==' ')
            {
				i++;
                fun[i]-=32;
            }
        }
        puts(fun);

    }
    return 0;
}
