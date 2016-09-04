#include<stdio.h>
#define MAXTITLE 41
#define MAXAUTHOR 31
struct book
{
    char title[MAXTITLE];
    char author[MAXAUTHOR];
    float value;
};
int main ()
{
    struct book readfirst;
    int score;
    printf("Enter text score:");
    scanf("%d",&score);
    if(score>=84)
    readfirst=(struct book){"zhuxian","xiaoding",20.0};
    else
    readfirst=(struct book){"wa","moyan",15.3};
    printf("Your assigned reading:");
    printf("%s by %s:$%.2f",readfirst.title,readfirst.author,readfirst.value);
    return 0;
}
