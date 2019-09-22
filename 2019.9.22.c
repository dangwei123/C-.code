#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//定义结构体
typedef struct Node
{
	int date;
	struct Node *next;
}Node,*Plist;
//初始化头结点
void InitPlist(Plist plist)
{
	if (plist == NULL)
	{
		return;
	}
	plist->next = NULL;
}

//得到一个节点
Node *GetNode(int val)
{
	Node *pGet = (Node *)malloc(sizeof(Node));
	pGet->date = val;
	pGet->next = NULL;
	return pGet;
}

//头插法
void InsertHead(Plist plist, int val)
{
	Node *pGet = GetNode(val);
	pGet->next = plist->next;
	plist->next = pGet;
}

//尾插法
void InsertTail(Plist plist, int val)
{
	Node *pGet = GetNode(val);
	Node *pcur = plist;
	while (pcur->next != NULL)
	{
		pcur = pcur->next;
	}
	pcur->next = pGet;
}

//得到表的长度
int Getlen(Plist plist)
{
	Node *pcur = plist->next;
	int len = 0;
	while (pcur != NULL)
	{
		len++;
		pcur = pcur ->next;
	}
	return len;
}

//打印
void Show1(Plist plist)
{
	Node *pcur = plist->next;
	while (pcur != NULL)
	{
		printf("%d ", pcur->date);
		pcur = pcur->next;
	}
	printf("\n");
}

//找到倒数第k个节点
Node *LastKNode(Plist plist,int k)
{
	Node *p = plist;
	Node *q = plist;
	while (k - 1)
	{
		if (p->next != NULL)
		{
			p = p->next;
			k--;
		}
		else
		{
			printf("没有该节点\n");
			break;
		}
	}
	while (p->next != NULL)
	{
		p = p->next;
		q = q ->next;
	}
	return q;
}

//逆置单链表

Node *ReversePlist(Plist plist)
{
	Node *pcur = plist;
	Node *pre = NULL;
	Node *NewHead = NULL;
	while (pcur != NULL)
	{
		Node *pcurNext = pcur->next;
		if (pcurNext == NULL)
		{
			NewHead = pcur;
		}
		pcur->next = pre;
		pre = pcur;
		pcur = pcurNext;
	}
	return NewHead;
}

//打印逆置后的单链表

void Show2(Plist plist)
{
	Node *pcur = plist;
	while (pcur->next != NULL)
	{
		printf("%d ", pcur->date);
		pcur = pcur->next;
	}
	printf("\n");
}

int main()
{
	Node Head ;
	InitPlist(&Head);
	//头插法

	/*InsertHead(&Head, 10);
	InsertHead(&Head, 20);
	InsertHead(&Head, 30);*/

	//尾插法

	InsertTail(&Head, 10);
	InsertTail(&Head, 20);
	InsertTail(&Head, 30);
	InsertTail(&Head, 40);
	InsertTail(&Head, 50);
	InsertTail(&Head, 60);

	//打印
	Show1(&Head);

	//得到长度
	int ret=Getlen(&Head);
	printf("%d\n", ret);

	//倒数第k个节点
	Node *p=LastKNode(&Head,3);
	printf("%d\n", p->date);

	//逆置单链表
	ReversePlist(&Head);
	Show2(&Head);
	return 0;
}