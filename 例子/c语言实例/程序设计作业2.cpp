#include<stdio.h>
#include<string.h>
#include<math.h>
int outmenu,menucase;
char path[100]="D://list.txt",getstr[100];
FILE *fp;
int menu()
{
	printf("ѡ����Ҫ��ʲô:\n");
	printf("0.�˳�;\n");
	printf("1.��ͨ������;\n");
	printf("2.�ж�����;\n");
	printf("3.�׳�;\n");
	printf("4.����;\n");
	printf("5.���������;\n");
	printf("���������:\n");
	scanf("%d",&outmenu);
	return outmenu;
}
void file()
{
	printf("�����ļ���·��Ϊ\n");
	printf("Ĭ��·��Ϊ%s\n",path);
	printf("�����봦��·��%t��ʹ��Ĭ��·�����ûس�");
	gets(getstr);
	if(strlen(getstr)!=0)
	{
		if((fp=fopen(getstr,"r"))==NULL)
		{
			printf("���ļ�ʧ�ܣ�ʹ��Ĭ��·����\n");
		}
		else
		{
			strcpy(path,getstr);
			puts(path);
		}
	}
	printf("�����¼���浽%s:\n",path);
	fp=fopen(path,"a");
	fprintf(fp,"======�����¼======\n");
	
}
void jisuanqi()
{
	double a,b;
	char x;
	printf("������\n");
	printf("������a ����� b\n");
	scanf("%lf%c%lf",&a,&x,&b);
	switch(x)
	{
			case '+':
			{
			printf("%lf  %c  %lf  ==%lf\n",a,x,b,a+b);
			fprintf(fp,"%lf  %c  %lf  ==%lf\n",a,x,b,a+b);
			break;
			}
			case '-':
			{
			printf("%lf  %c  %lf  ==%lf\n",a,x,b,a-b);
			fprintf(fp,"%lf  %c  %lf  ==%lf\n",a,x,b,a-b);
			break;
			}
			case '*':
			{
			printf("%lf  %c  %lf  ==%lf\n",a,x,b,a*b);
			fprintf(fp,"%lf  %c  %lf  ==%lf\n",a,x,b,a*b);
			break;
			}
			case '/':
			{
			printf("%lf  %c  %lf  ==%lf\n",a,x,b,a/b);
			fprintf(fp,"%lf  %c  %lf  ==%lf\n",a,x,b,a/b);
			break;
			}
			
	}
}

void reinian()
{
	printf("������һ�����\n");
	int year;
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("%d������\n",year);
		fprintf(fp,"%d������\n",year);
	}
	else
	{
		printf("%d��������\n",year);
		fprintf(fp,"%d��������\n",year);
	}
}
	
void jieceng()
{
	long int n=1;
	long int ans=1;
	printf("������Ҫ�󼸽׳�\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ans*=i;
	}
	printf("%d�Ľ׳�Ϊ%d\n",n,ans);
	fprintf(fp,"%d�Ľ׳�Ϊ%d\n",n,ans);
}		
		
void paixu()
{
	printf("����������ĸ���\n");
	int n,xx[1000];
	scanf("%d",&n);
	for(int p2=0;p2<n;p2++)
	{
		scanf("%d",&xx[p2]);
	}
	for(int a=0;a<n-1;a++)
		for(int b=0;b<n-1;b++)
		{
			if(xx[b]>xx[b+1])
			{
				int t;
				t=xx[b];
				xx[b]=xx[b+1];
				xx[b+1]=t;
			}
		}
	printf("������Ϊ\n");
	fprintf(fp,"������Ϊ\n");
	for(int p1=0;p1<n;p1++)
	{
		printf("%d ",xx[p1]);
		fprintf(fp,"%d ",xx[p1]);
	}
	printf("\n");
	fprintf(fp,"\n");
}
void mianji()
{
	int a,b,c,p;
	double s;
	printf("������������������:\n");
	scanf("%d %d %d",&a,&b,&c);
	if ((a+b>c)&&(b+c>a)&&(a+c>b))
	{
		p=a+b+c;
		s=(sqrt(p*(p-a)*(p-b)*(p-c)))/p;
		printf("���Ϊ%lf\n",s);
		fprintf(fp,"���Ϊ%lf\n",s);
		return;
	}
	else
		printf("������������\n");
	return;
}
	
int main()
{
	printf("����һ���๦�ܼ�����\n");
	file();
menu:
	menucase=menu();

	switch(menucase)
	{
		
			case 0:
			{
				fclose(fp);
				return 0;
			}
			case 1:
			{
				jisuanqi();
				goto menu;
			}
			case 2:
			{
				reinian();
				goto menu;
			}
			case 3:
			{
				jieceng();
				goto menu;
			}
			case 4:
			{
				paixu();
				goto menu;
			}
			case 5:
			{
				mianji();
				goto menu;
			}
			default:
			goto menu;
	}
	return 0;
}
