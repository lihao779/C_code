#include"SList.h"
#include<stdio.h>
#include<assert.h>
#include<malloc.h>

SListNode* BuySListNode(SLDateType date)
{
	SListNode* newNode1 = (SListNode*)malloc(sizeof(SListNode));
	if (newNode1 == NULL)
	{
		assert(0);
		return NULL;
	}
	newNode1->next = NULL;
	newNode1->date = date;
	return newNode1;
}


void SListPushBack(SListNode** head, SLDateType date)
{
	assert(head);
	SListNode* newNode = BuySListNode(date);
	//������
	if (NULL == *head)
	{
		*head = newNode;
	}
	//�����нڵ�
	else
	{
		SListNode* cur = *head;
		while (cur->next)
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}
void SListPopBack(SListNode** head)
{
	assert(head);
	if (*head == NULL)
	{
		//������
		return;
	}
	else if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		SListNode* fast = *head;
		SListNode* slow = NULL;
		while (fast->next)
		{
			slow = fast;
			fast = fast->next;
		}
		slow->next = NULL;
		free(fast);
	}
	

}
void SListPushFront(SListNode** head, SLDateType date)
{
	assert(head);
	SListNode* newNode = BuySListNode(date);
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
}
void SListPopFront(SListNode** head)
{
	assert(head);
	if (*head == NULL)
	{
		return;
	}
	else
	{
		SListNode* PopDestroy = *head;
		*head = (*head)->next;
		free(PopDestroy);
	}
}


void SListInsertAfter(SListNode* pos, SLDateType date)//��������
{
	assert(pos);
	SListNode* newNode = BuySListNode(date);
	newNode->next = pos->next;
	pos->next = newNode;

}
void SListEraseAfter(SListNode* pos)
{
	if (!pos->next)
		return;

	SListNode* cur = pos->next;
	pos->next = cur->next;
	free(cur);
}


int SListEmpty(SListNode* head)
{

	return head == NULL;//�ǿշ���1 ���Ƿ���0
}
int SListSize(SListNode* head)
{

	/*if (head == NULL)
		return 0;
	int count = 0;
	SListNode* cur = head;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;*/
	int count = 0;
	SListNode* cur = head;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;
}
SListNode* SListFind(SListNode* head, SLDateType date)
{
	/*if (head == NULL)
		return NULL;
	else
	{
		SListNode* cur = head;
		while (cur)
		{
			if (cur->date == date)
			{
				return cur;
			}
			cur = cur->next;
		}
	}
	return NULL;*/

	SListNode* cur = head;
	while (cur)
	{
		if (cur->date == date)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void SListDestroy(SListNode** head)
{
	assert(head);
	SListNode* DestList = NULL;
	while (*head)
	{
		DestList = *head;
		*head = (*head)->next;
		free(DestList);
	}

}

////////////��ӡ
void PrintSList(SListNode* head)
{
	//while (head)//�ýڵ��ж�
	//{
	//	printf("%d->", head->date);
	//	head = head->next;
	//}
	//printf("NULL\n");
	SListNode* cur = head;
	while (cur)
	{
		printf("%d--->", cur->date);
		cur = cur->next;
	}
	printf("NULL\n");
}

////////////////////////
//����
void TestList1()
{
		SListNode* list = NULL;
		SListPushBack(&list, 1);
		SListPushBack(&list, 2);
		SListPushBack(&list, 3);
		SListPushBack(&list, 4);
		SListPushBack(&list, 5);
		SListInsertAfter(SListFind(list, 4), 10);
		SListEraseAfter(SListFind(list, 4));
		SListEraseAfter(SListFind(list, 4));
		SListEraseAfter(SListFind(list, 4));


		PrintSList(list);
		SListDestroy(&list);

}
//void TestSList()
//{
//	SListNode* list = NULL;
//	SListPushBack(&list, 1);
//	SListPushBack(&list, 2);
//	SListPushBack(&list, 3);
//	SListPushBack(&list, 4);
//	SListPushBack(&list, 5);
//	int count = SListSize(list);
//	int empty = SListEmpty(list);
//	SListNode* pf = SListFind(list, 4);
//	PrintSList(list);
//	SListDestroy(&list);
//}