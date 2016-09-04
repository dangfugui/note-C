#include <iostream>   
#include <cstdio>   
#include <cstring>    
using namespace std;  
  
char str[5005];  
char des[24];  
  
char tran(char c)  
{  
    char ch=c;  
    if ('a'<=c&&c<='z')  
    {  
       ch=c-'a'+'A';  
    }  
    else if ('A'<=c&&c<='Z')  
    {  
        ch=c-'A'+'a';  
    }  
    return ch;  
}  
int main()  
{  
    while (gets(str+1))  
    {  
       int a=0;  
       int len=strlen(str+1);  
        int lim=len/16;  
        int mark=len%16;  
        for (int k=1;k<=lim;k++)//先处理前面为整16字符的   
       {  
           printf("%04x: ",a+(k-1)*16);  
            int j=1;  
            for (int i=(k-1)*16+1;i<=(k-1)*16+16;i++)  
            {  
                printf("%x",str[i]);  
                if (!(i&1))printf(" ");  
               des[j++]=tran(str[i]);  
                if (i%16==0)  
                {  
                    printf("%s\n",des+1);  
                }  
            }  
        }  
        if (mark==0)continue;  
        printf("%04x: ",a+lim*16);//向下为处理后面剩余的字符（不足16个）   
       int l=1;  
        int i;  
        for (i=lim*16+1;str[i]!='\0';++i)  
       {  
            printf("%x",str[i]);  
            des[l++]=tran(str[i]);  
            if (!(i&1))printf(" ");  
        }  
        des[l]='\0';  
        for (int j=i;j<=lim*16+16;++j)  
        {  
            printf("  ");  
            if (!(j&1))printf(" ");  
        }  
        printf("%s\n",des+1);  
    }  
    return 0;  
}  
