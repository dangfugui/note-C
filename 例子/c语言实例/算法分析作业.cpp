#include<stdio.h>
#include<string.h>

struct people{
	char name[30];
	char id[30];
	char sex[5];
	char birthday[30];
	char phone[11];
};
	char name[30]="";
	char id[30]="";
	char sex[5]="";
	char birthday[30]="";
	char phone[11]="";
	char path[100]="D://people.txt",getstr[100];
	int menu,num=1;
	FILE *fp;
void output()
{
	fp=fopen(path,"a+");
	fscanf(fp,"姓名=%s    学号=%s    性别=%s    生日=%s    电话=%s\n",&name,&id,&sex,&birthday,&phone);
	printf("姓名=%s    学号=%s    性别=%s    生日=%s    电话=%s\n",name,id,sex,birthday,phone);
	fclose(fp);
}
void input()
{
	fp=fopen(path,"a+");
	printf("输入姓名:\n");
	getchar();
	gets(name);
	printf("输入学号:\n");
	gets(id);
	printf("输入性别:\n");
	gets(sex);
	printf("输入生日:\n");
	gets(birthday);
	printf("输入电话:\n");
	gets(phone);
	fprintf(fp,"姓名=%s    学号=%s    性别=%s    生日=%s    电话=%s\n",name,id,sex,birthday,phone);
	fclose(fp);
}
int outmenu()
{
	printf("选择你要干什么:\n");
	printf("1.;\n");
	printf("2.加入记录;\n");
	printf("3.退出;\n");
	printf("请输入序号:\n");
	scanf("%d",&menu);
	return menu;
}
int main()
{

	printf("处理文件的路径为\n");
	printf("默认路径为%s\n",path);
	printf("请输入处理路径%t若使用默认路径请敲回车");
	gets(getstr);
	if(strlen(getstr)!=0)
	{
		if((fp=fopen(getstr,"r+"))==NULL)
		{
			printf("打开文件失败，使用默认路径。\n");
		}
		else
		{
			strcpy(path,getstr);
			puts(path);
		}
	}
	printf("开始对%s处理:\n",path);
	//fp=fopen(path,"w+");
menu:
	switch(outmenu())
	{
	case 1:
		{
			output();
			goto menu;
		}
	case 2:
		{
			input();
			goto menu;
		}
	case 3:
		{
			return 0;
		}
	default:
	{
		goto menu;
	}
	}
	return 0;
}