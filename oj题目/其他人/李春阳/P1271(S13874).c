#include<stdio.h>
#include<string.h>
char mm[10000],ch[1];
char fin[30];
int add=0,num=0,lenmm,big;
int a,b,c,i;
int find(char f)
{
 
    for(i=0;i<(int)strlen(fin);i++)
    {
        if(f==fin[i])
            return 1;
    }
    return 0;
}
int main()
{
    gets(mm);
    lenmm=strlen(mm);
    for(a=0;a<lenmm;a++)
    {
        if(find(mm[a])==0)
        {
            ch[0]=mm[a];
            strcat(fin,ch);
        }
    }
    num=strlen(fin);
     
    for(b=0;b<lenmm;b++)
    {
        fin[0]='\0';
        add=0;
        for(c=b;c<lenmm;c++)
        {
            if(find(mm[c])==0)
            {
                ch[0]=mm[c];
                strcat(fin,ch);
            }
            else
            {
                break;
            }
        }
        add=strlen(fin);
        if(add>big)
            big=add;
    }
    printf("%d %d\n",num,big);
    return 0;
}