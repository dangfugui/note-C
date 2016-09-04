#include<stdio.h>
#define MAXTITLE 41
#define MAXAUTHOR 31
struct book
{
    char title[MAXTITLE];
    char author[MAXAUTHOR];
    float value;
}library;
int main ()
{
struct book library={"wa","moyan",12.4551};
printf("title:%s and author:%s price:%.2f",library.title,library.author,library.value);
return 0;
}
