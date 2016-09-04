#include"stdio.h"

void and(char *a,char *b)
{
	for(;*b!='\0';a++,b++)
	{
		*a=*b;
	}
	*a='\0';
}

main()
{	
	char str1[20],str2[20];
	gets(str1);
	gets(str2);
	char *a,*b;
	a=str1;
	b=str2;
	and(a,b);
	puts(a);
}