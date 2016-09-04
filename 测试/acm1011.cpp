#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
main()
{
	char name[25],namenew[25];
	char ans;
	int i;
	printf("what is you name ?");
	gets(name);
	printf("Are you sure that %s in you name(y/n)?",name);
	ans = getch();
	if(toupper(ans)=='Y')
	{ for (i=0;i<=strlen(name);i++)
	{namenew[i]=toupper(name[i]);}
	printf("You name is uppercase letters is %s.\n",namenew);
	}
	return 0;
}

