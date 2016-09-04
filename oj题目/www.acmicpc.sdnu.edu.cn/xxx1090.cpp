#include<stdio.h>
int main()
{
	char str[99999];

	while(gets(str))
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(i==0)
            {
                str[i]-=32;
            }
            if(str[i]==' ')
            {
				i++;
                str[i]-=32;
            }
        }
        puts(str);


    }
    return 0;
}
