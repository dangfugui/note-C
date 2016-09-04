#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<iostream>
using namespace std;
typedef struct LNode{
	long id;
	char name[20];
	double results[5];
	struct LNode *next;
}LinkList;

/* 功能：构建一个空的带头节点的单链表*/
struct LNode* InitList(struct LNode *L)
{
	struct LNode *a;
	a = (struct LNode*)malloc(sizeof(struct LNode));
	scanf("%d", &a->id);
	printf("%d\n", a->id);
	a->next = NULL;
	if (L == NULL)
	{
		L = a;
	}else{
		LNode *p=L;
		while (p->next != NULL){
			p = p->next;
		}
		p->next = a;
	}
	return L;
}

int main()
{
	struct LNode *list;
	list = NULL;
	list=InitList(list);
	list = InitList(list);
	printf("d%d", list->next->id);
	printf("dang");
	scanf("%d,%d");
	getchar();
	return 0;
}