#define _CRT_SECURE_NO_WARNINGS
#include"NBA.h"
#include<assert.h>
#include<stdio.h>
#include<malloc.h>
#include<Windows.h>

void Savei(Node* head)//д�ļ�
{
	assert(head);
	FILE* pfwrite = fopen("NBA.txt", "ab");
	if (pfwrite == NULL)
	{
		perror("Write:");
		return;
	}
	//д�ļ�
	Node* newhead = head;
	while (newhead->next)
	{
		fwrite(newhead->next, sizeof(Node), 1, pfwrite);
		newhead = newhead->next;
	}
	printf("д�����ݳɹ�\n");
	//�ر��ļ�
	fclose(pfwrite);
	pfwrite = NULL;
}
void Readi(Node* head)//���ļ�������head������ȥ��//û�������޷���ȡ
{
	assert(head);
	Node* cur = head;
	FILE* pfread = fopen("NBA.txt", "rb");
	if (pfread == NULL)
	{
		perror("Read:");
		return;
	}
	//���ļ�
	cur->next = (Node*)calloc(1, sizeof(Node));
	if (cur->next == NULL)
	{
		assert(0);
		return;
	}
	int ret = 0;
	while ((ret = fread(cur->next, sizeof(Node), 1, pfread))>=1)
	{
		cur = cur->next;
		cur->next = (Node*)calloc(1, sizeof(Node));
	}
	if (feof(pfread))
		printf("��ȡ���ݳɹ�\n");
	else if (ferror(pfread))
		perror("�����ȡNBA.txt:\n");
	free(cur->next);
	cur->next = NULL;
	//�ر��ļ�
	fclose(pfread);
	pfread = NULL;
}
Node* NBADate(Node* p)
{
	assert(p);
	printf("  ��Ա������");
	scanf("%s", p->date.name);
	printf("  ��Ա������ӣ�");
	scanf("%s", p->date.team);
	printf("  ��Ա���룺");
	scanf("%d", &p->date.num);
	printf("  ��Ա�÷֣�");
	scanf("%f", &p->date.score);
	printf("  ��Ա������");
	scanf("%f", &p->date.assist);
	printf("  ��Ա���壺");
	scanf("%f", &p->date.block);
	return p;
}
Node* NBAInput()
{
	int x = 0;
	int i = 0;
	printf("����������Ҫ¼�����Ա��\n");
	scanf("%d",&x);
	Node* cur = (Node*)malloc(sizeof(Node));
	cur->next = NULL;
	Node* head = cur;
	do
	{
		Node* p = (Node*)calloc(1, sizeof(Node));
		printf("\t\t***********�������%d����Ա��Ϣ***********\n", i + 1);
		p = NBADate(p);
		p->next = NULL;
		cur->next = p;
		cur = cur->next;
		i++;
	} while (i<x);
	printf("¼�����\n");
	return head;

}
int NBAEmpty(Node* head)
{
	assert(head);
	return head->next == NULL;
}
Node* NBAModify(Node* head)
{
	assert(!NBAEmpty(head));
	printf("����������Ҫ�޸ĵ���Ա������");
	char name[20] = { 0 };
	scanf("%s", &name);
	Node* cur = head->next;
	while (cur)
	{
		if (strcmp(name, cur->date.name))
			cur = cur->next;
		else
			break;
	}
	if (!cur)
		printf("������%s�������\n", name);
	else
	{
		printf("\t\t***********������%s��Ա����Ϣ***********\n", name);
		cur = NBADate(cur);
		printf("�޸ĳɹ�\n");
	}
	return head;
}
Node* NBAInsert(Node* head)
{
	assert(head);
	Node* cur = head;
	Node* p = (Node*)malloc(sizeof(Node));
	p = NBADate(p);
	p->next = NULL;
	while (cur->next)
	{
		cur = cur->next;
	}
	cur->next = p;
	return head;

}

Node* NBADelte(Node* head)
{
	assert(!NBAEmpty(head));
	printf("����������Ҫɾ������Ա������");
	char name[20] = { 0 };
	scanf("%s", name);
	Node* cur = head->next;
	Node* prev = head;
	while (cur)
	{
		if (strcmp(cur->date.name, name))
		{
			prev = cur;
			cur = cur->next;
		}
		else
			break;
	}
	if (!cur)
		printf("������%s�����Ա\n", name);
	else
	{
		cur = cur->next;
		free(prev->next);
		prev->next = cur;
		printf("ɾ���ɹ�\n");
	}
	return head;
}
void NBAFind(Node* head)
{
	assert(!NBAEmpty(head));
	printf("����������Ҫ��ѯ����Ա������");
	char name[20] = { 0 };
	scanf("%s", name);
	Node* cur = head->next;
	while (cur)
	{
		if (strcmp(name, cur->date.name) == 0)
			break;
		cur = cur->next;
	}
	if (!cur)
		printf("������������ѯ����Ա\n");
	else
	{
		printf("\n\n                              --��Ա��Ϣ--                                            \n\n");
		printf("\t------------------------------------------------------------------------------------------\n");
		printf("\t����------------����-------------���-----------�÷�------------����-------------����-----\n");
		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", cur->date.name, cur->date.num, cur->date.team, 
			cur->date.score, cur->date.block, cur->date.assist);
	}
}
void NBAPrint(Node* head)
{
	assert(!NBAEmpty(head));
	Node* cur = head->next;
	printf("\n\n                              --��Ա��Ϣ--                                            \n\n");
	printf("\t------------------------------------------------------------------------------------------\n");
	printf("\t����------------����-------------���-----------�÷�------------����-------------����-----\n");
	while (cur)
	{
		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", cur->date.name, cur->date.num, cur->date.team,
			cur->date.score, cur->date.block, cur->date.assist);
		cur = cur->next;
	}

}
Node* NBABlockSort(Node* head)
{
	assert(!NBAEmpty(head));
	//����ð��
	Node* cur, *prev;
	Node* tmp = NULL;
	while (tmp != head->next)
	{
		cur = head->next;
		prev = head;
		while (cur->next != tmp)
		{
			if (cur->next->date.block < prev->next->date.block)
			{
				prev->next = cur->next;
				cur->next = cur->next->next;
				prev->next->next = cur;
			}
			prev = prev->next;
			cur = prev->next;
		}
		tmp = cur;
	}
	printf("����������ɹ�\n");
	return head;

}
Node* NBAScoreSort(Node* head)
{
	assert(!NBAEmpty(head));
	//����ð��
	Node* cur, *prev;
	Node* tmp = NULL;
	while (tmp != head->next)
	{
		cur = head->next;
		prev = head;
		while (cur->next != tmp)
		{
			if (cur->next->date.score < prev->next->date.score)
			{
				prev->next = cur->next;
				cur->next = cur->next->next;
				prev->next->next = cur;
			}
			prev = prev->next;
			cur = prev->next;
		}
		tmp = cur;
	}
	printf("���÷�����ɹ�\n");
	return head;
}
Node* NBAAssistSort(Node* head)
{
	assert(!NBAEmpty(head));
	//����ð��
	Node* cur, *prev;
	Node* tmp = NULL;
	while (tmp != head->next)
	{
		cur = head->next;
		prev = head;
		while (cur->next != tmp)
		{
			if (cur->next->date.assist < prev->next->date.assist)
			{
				prev->next = cur->next;
				cur->next = cur->next->next;
				prev->next->next = cur;
			}
			prev = prev->next;
			cur = prev->next;
		}
		tmp = cur;
	}
	printf("����������ɹ�\n");
	return head;
}
void NBADestroy(Node* head)
{
	assert(head);
	free(head->next);
	head->next = NULL;
}
