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
	//空链表
	if (NULL == *head)
	{
		*head = newNode;
	}
	//链表有节点
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
		//空链表
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


void SListInsertAfter(SListNode* pos, SLDateType date)//插入后面的
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

	return head == NULL;//是空返回1 不是返回0
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

////////////打印
void PrintSList(SListNode* head)
{
	//while (head)//用节点判断
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
//测试



struct SListNode* insertionSortList(struct SListNode* head)
{
	if (head == NULL || head->next == NULL)
		return head;
	int len = 0;
	struct SListNode* cur = head;
	while (cur)
	{
		len++;
		cur = cur->next;
	}
	cur = head;
	int* arr = (int*)malloc(sizeof(int)*len);
	int i = 0;
	for (i = 0; i<len; i++)
	{
		arr[i] = cur->date;
		cur = cur->next;
	}
	for (i = 1; i<len; i++)
	{
		int end = i - 1;
		int key = arr[i];
		for (end; end >= 0; end--)
		{
			if (key<arr[end])
			{
				arr[end + 1] = arr[end];
			}
			else
				break;
		}
		arr[end + 1] = key;
	}
	cur = head;
	i = 0;
	while (cur)
	{
		
		cur->date = arr[i];
		cur = cur->next;
		i++;
	}
	free(arr);
	return head;
}



void TestList1()
{
		SListNode* list = NULL;
		SListPushBack(&list, 4);
		SListPushBack(&list, 2);
		SListPushBack(&list, 1);
		SListPushBack(&list, 3);
		PrintSList(list);
		insertionSortList(list);
		

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