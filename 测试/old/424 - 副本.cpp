#include <stdio.h>
#define max 100
void jiancha(int count[],char string[])
{
  int i=0;
  while(string[i]!='\0')
  {
    if(string[i]>='0'&&string[i]<='9')
          count[0]++;
    else if((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z'))
              count[1]++;
   else if(string[i]==' ')
                { 
                  count[2]++;
                  if((string[i-1]>='a'&&string[i-1]<='z')||(string[i-1]>='A'&&string[i-1]<='Z'))  count[3]++;
              }
      i++;
  }
}
void main()
{
 int count[4]={0};
 char string[max];
 printf("�����ַ���\n");
 gets(string);
 printf("���������%s ",string);
 jiancha(count,string);
 printf("����%d��ĸ%d�ո�%d����%d\n",count[0],count[1],count[2],count[3]);
}