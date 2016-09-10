#include<stdio.h>
struct st
{
    char name[30];
    long num;
    int score;
};
int main()
{
    FILE *fp;
    int a,n;
    st t;
    printf("please in n:\n");
    scanf("%d",&n);
    fp=fopen("dangdang","w");
    for(a=0;a<n;a++)
    {
        printf("name,num,score\n");
        scanf("%s,%l,%d",t.name,t.num,t.score);
        fprintf(fp,"%d:\t%s,%l,%d\n",t.name,t.num,t.score);
    }
}
