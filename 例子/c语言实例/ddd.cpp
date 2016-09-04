#include<stdio.h>
int mian()
{
	FILE *pt;
	char path[100]="D://people.txt";
	pt=fopen(path,"w+");
	fprintf(pt,"dddddd");
	fclose(pt);
	return 0;
}