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
	fscanf(fp,"����=%s    ѧ��=%s    �Ա�=%s    ����=%s    �绰=%s\n",&name,&id,&sex,&birthday,&phone);
	printf("����=%s    ѧ��=%s    �Ա�=%s    ����=%s    �绰=%s\n",name,id,sex,birthday,phone);
	fclose(fp);
}
void input()
{
	fp=fopen(path,"a+");
	printf("��������:\n");
	getchar();
	gets(name);
	printf("����ѧ��:\n");
	gets(id);
	printf("�����Ա�:\n");
	gets(sex);
	printf("��������:\n");
	gets(birthday);
	printf("����绰:\n");
	gets(phone);
	fprintf(fp,"����=%s    ѧ��=%s    �Ա�=%s    ����=%s    �绰=%s\n",name,id,sex,birthday,phone);
	fclose(fp);
}
int outmenu()
{
	printf("ѡ����Ҫ��ʲô:\n");
	printf("1.;\n");
	printf("2.�����¼;\n");
	printf("3.�˳�;\n");
	printf("���������:\n");
	scanf("%d",&menu);
	return menu;
}
int main()
{

	printf("�����ļ���·��Ϊ\n");
	printf("Ĭ��·��Ϊ%s\n",path);
	printf("�����봦��·��%t��ʹ��Ĭ��·�����ûس�");
	gets(getstr);
	if(strlen(getstr)!=0)
	{
		if((fp=fopen(getstr,"r+"))==NULL)
		{
			printf("���ļ�ʧ�ܣ�ʹ��Ĭ��·����\n");
		}
		else
		{
			strcpy(path,getstr);
			puts(path);
		}
	}
	printf("��ʼ��%s����:\n",path);
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