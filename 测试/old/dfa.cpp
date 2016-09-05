#include<stdio.h>
#include<string.h>
struct boy{char name[30];int ages;};
int main()
{

    int a;
    struct boy hh;
    gets(hh.name);
    puts(hh.name);
    a=strlen(hh.name);
    printf("%d",a);
}
