#include<stdio.h>
char*itobs(int n,char*ps);
void show_bstr(const char*);
int invert_end (int num,int bits);
int main ()
{
    char bin_str[8*sizeof(int)+1];
    int number;
    puts("Enter integers and see them in binary.");
    puts("Non_numeric input terminates program.");
    while(scanf("%d",number)==1)
    {
        itobs(number,bin_str);
        printf("%d is\n",number);
        show_bstr(bin_str);
        putchar('\n');

    }
}
