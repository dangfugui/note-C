#include <stdio.h>
#include <ctype.h>
int main(void)
{
   int num=0;
   char ch;
   bool word=0;//�������
   while ( (ch=getchar()) != EOF )//�Ӽ�������һ���ַ������ݣ���ֵ��������ch��������ֵ����EOF��ѭ����ʼ
  {
     if ( isalpha(ch) && !word )//�ж��ַ�ch�Ƿ�ΪӢ����ĸ
     {
        word = 1;
        num++;
     }//��chΪӢ����ĸʱ������1
     if ( !isalpha(ch) )
     {
        word = 0;
     }//���򷵻���
  }
  printf("words: %d\n",num);
  return 0;
}