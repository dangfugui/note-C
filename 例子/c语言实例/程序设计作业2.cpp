#include<stdio.h>
#include<string.h>
#include<math.h>
int outmenu,menucase;
char path[100]="D://list.txt",getstr[100];
FILE *fp;
int menu()
{
	printf("选择你要干什么:\n");
	printf("0.退出;\n");
	printf("1.普通计算器;\n");
	printf("2.判断瑞年;\n");
	printf("3.阶乘;\n");
	printf("4.排序;\n");
	printf("5.三角形面积;\n");
	printf("请输入序号:\n");
	scanf("%d",&outmenu);
	return outmenu;
}
void file()
{
	printf("处理文件的路径为\n");
	printf("默认路径为%s\n",path);
	printf("请输入处理路径%t若使用默认路径请敲回车");
	gets(getstr);
	if(strlen(getstr)!=0)
	{
		if((fp=fopen(getstr,"r"))==NULL)
		{
			printf("打开文件失败，使用默认路径。\n");
		}
		else
		{
			strcpy(path,getstr);
			puts(path);
		}
	}
	printf("计算记录保存到%s:\n",path);
	fp=fopen(path,"a");
	fprintf(fp,"======计算记录======\n");
	
}
void jisuanqi()
{
	double a,b;
	char x;
	printf("计算器\n");
	printf("请输入a 运算符 b\n");
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
	printf("请输入一个年份\n");
	int year;
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
	{
		printf("%d是瑞年\n",year);
		fprintf(fp,"%d是瑞年\n",year);
	}
	else
	{
		printf("%d不是瑞年\n",year);
		fprintf(fp,"%d不是瑞年\n",year);
	}
}
	
void jieceng()
{
	long int n=1;
	long int ans=1;
	printf("请输入要求几阶乘\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ans*=i;
	}
	printf("%d的阶乘为%d\n",n,ans);
	fprintf(fp,"%d的阶乘为%d\n",n,ans);
}		
		
void paixu()
{
	printf("请输入排序的个数\n");
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
	printf("排序结果为\n");
	fprintf(fp,"排序结果为\n");
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
	printf("请输入三角形三条边:\n");
	scanf("%d %d %d",&a,&b,&c);
	if ((a+b>c)&&(b+c>a)&&(a+c>b))
	{
		p=a+b+c;
		s=(sqrt(p*(p-a)*(p-b)*(p-c)))/p;
		printf("面积为%lf\n",s);
		fprintf(fp,"面积为%lf\n",s);
		return;
	}
	else
		printf("三边输入有误\n");
	return;
}
	
int main()
{
	printf("这是一个多功能计算器\n");
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
