#include <stdio.h>
#include <ctype.h>
int main(void)
{
   int num=0;
   char ch;
   bool word=0;//定义变量
   while ( (ch=getchar()) != EOF )//从键盘输入一个字符型数据，把值赋给变量ch，如果这个值不是EOF，循环开始
  {
     if ( isalpha(ch) && !word )//判断字符ch是否为英文字母
     {
        word = 1;
        num++;
     }//当ch为英文字母时，返回1
     if ( !isalpha(ch) )
     {
        word = 0;
     }//否则返回零
  }
  printf("words: %d\n",num);
  return 0;
}