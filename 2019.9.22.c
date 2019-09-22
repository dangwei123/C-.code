#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//����ṹ��
typedef struct Node
{
	int date;
	struct Node *next;
}Node,*Plist;
//��ʼ��ͷ���
void InitPlist(Plist plist)
{
	if (plist == NULL)
	{
		return;
	}
	plist->next = NULL;
}

//�õ�һ���ڵ�
Node *GetNode(int val)
{
	Node *pGet = (Node *)malloc(sizeof(Node));
	pGet->date = val;
	pGet->next = NULL;
	return pGet;
}

//ͷ�巨
void InsertHead(Plist plist, int val)
{
	Node *pGet = GetNode(val);
	pGet->next = plist->next;
	plist->next = pGet;
}

//β�巨
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

//�õ���ĳ���
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

//��ӡ
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

//�ҵ�������k���ڵ�
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
			printf("û�иýڵ�\n");
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

//���õ�����

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

//��ӡ���ú�ĵ�����

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
	//ͷ�巨

	/*InsertHead(&Head, 10);
	InsertHead(&Head, 20);
	InsertHead(&Head, 30);*/

	//β�巨

	InsertTail(&Head, 10);
	InsertTail(&Head, 20);
	InsertTail(&Head, 30);
	InsertTail(&Head, 40);
	InsertTail(&Head, 50);
	InsertTail(&Head, 60);

	//��ӡ
	Show1(&Head);

	//�õ�����
	int ret=Getlen(&Head);
	printf("%d\n", ret);

	//������k���ڵ�
	Node *p=LastKNode(&Head,3);
	printf("%d\n", p->date);

	//���õ�����
	ReversePlist(&Head);
	Show2(&Head);
	return 0;
}