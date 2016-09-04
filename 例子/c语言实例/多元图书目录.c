#include<stdio.h>
#define MAXBOOKS 100
#define MAXTITLE 40
#define MAXAUTHOR 40
struct book{char title[MAXTITLE];char author[MAXAUTHOR];float value;};
int main ()
{
    struct book library[MAXBOOKS];
    int count=0;
    int index;
    printf("Now,please enter the first book title.\n");
    printf("[enter]at the atart of a line.\n");
    while(count<MAXBOOKS&&gets(library[count].title)!=NULL&&library[count].title[0]!='\0')
    {
        printf("Now enter the author.\n");
        gets(library[count].author);
        printf("Now enter the value.\n");
        scanf("%f",&library[count++].value);
        while(getchar()!='\n')
            continue;
        if(count<MAXBOOKS)
            printf("Enter the next title.\n");

    }
    if(count>=0)
    {
        printf("here is the list of the books:\n");
        for(index=0;index<count;index++)
            printf("%s by %s:$%.2f\n",library[index].title,library[index].author,library[index].value);

    }

    else
       {

        printf("No books?Too bad.\n");
       }
    return 0;

}
