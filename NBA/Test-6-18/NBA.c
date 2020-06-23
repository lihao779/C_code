#define _CRT_SECURE_NO_WARNINGS
#include"NBA.h"
#include<assert.h>
#include<stdio.h>
#include<malloc.h>
#include<Windows.h>

void Savei(Node* head)//写文件
{
	assert(head);
	FILE* pfwrite = fopen("NBA.txt", "ab");
	if (pfwrite == NULL)
	{
		perror("Write:");
		return;
	}
	//写文件
	Node* newhead = head;
	while (newhead->next)
	{
		fwrite(newhead->next, sizeof(Node), 1, pfwrite);
		newhead = newhead->next;
	}
	printf("写入数据成功\n");
	//关闭文件
	fclose(pfwrite);
	pfwrite = NULL;
}
void Readi(Node* head)//读文件（读到head链表中去）//没有数据无法读取
{
	assert(head);
	Node* cur = head;
	FILE* pfread = fopen("NBA.txt", "rb");
	if (pfread == NULL)
	{
		perror("Read:");
		return;
	}
	//读文件
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
		printf("读取数据成功\n");
	else if (ferror(pfread))
		perror("错误读取NBA.txt:\n");
	free(cur->next);
	cur->next = NULL;
	//关闭文件
	fclose(pfread);
	pfread = NULL;
}
Node* NBADate(Node* p)
{
	assert(p);
	printf("  球员姓名：");
	scanf("%s", p->date.name);
	printf("  球员所在球队：");
	scanf("%s", p->date.team);
	printf("  球员号码：");
	scanf("%d", &p->date.num);
	printf("  球员得分：");
	scanf("%f", &p->date.score);
	printf("  球员助攻：");
	scanf("%f", &p->date.assist);
	printf("  球员篮板：");
	scanf("%f", &p->date.block);
	return p;
}
Node* NBAInput()
{
	int x = 0;
	int i = 0;
	printf("请输入你需要录入的球员数\n");
	scanf("%d",&x);
	Node* cur = (Node*)malloc(sizeof(Node));
	cur->next = NULL;
	Node* head = cur;
	do
	{
		Node* p = (Node*)calloc(1, sizeof(Node));
		printf("\t\t***********请输入第%d个球员信息***********\n", i + 1);
		p = NBADate(p);
		p->next = NULL;
		cur->next = p;
		cur = cur->next;
		i++;
	} while (i<x);
	printf("录入完毕\n");
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
	printf("请输入你需要修改的球员姓名：");
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
		printf("不存在%s这个球星\n", name);
	else
	{
		printf("\t\t***********请输入%s球员的信息***********\n", name);
		cur = NBADate(cur);
		printf("修改成功\n");
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
	printf("请输入你需要删除的球员姓名：");
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
		printf("不存在%s这个球员\n", name);
	else
	{
		cur = cur->next;
		free(prev->next);
		prev->next = cur;
		printf("删除成功\n");
	}
	return head;
}
void NBAFind(Node* head)
{
	assert(!NBAEmpty(head));
	printf("请输入你需要查询的球员姓名：");
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
		printf("不存在你所查询的球员\n");
	else
	{
		printf("\n\n                              --球员信息--                                            \n\n");
		printf("\t------------------------------------------------------------------------------------------\n");
		printf("\t姓名------------号码-------------球队-----------得分------------篮板-------------助攻-----\n");
		printf("\t%-17s%-16d%-15s%-16.1f%-17.1f%-17.1f\n", cur->date.name, cur->date.num, cur->date.team, 
			cur->date.score, cur->date.block, cur->date.assist);
	}
}
void NBAPrint(Node* head)
{
	assert(!NBAEmpty(head));
	Node* cur = head->next;
	printf("\n\n                              --球员信息--                                            \n\n");
	printf("\t------------------------------------------------------------------------------------------\n");
	printf("\t姓名------------号码-------------球队-----------得分------------篮板-------------助攻-----\n");
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
	//类似冒泡
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
	printf("按篮板排序成功\n");
	return head;

}
Node* NBAScoreSort(Node* head)
{
	assert(!NBAEmpty(head));
	//类似冒泡
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
	printf("按得分排序成功\n");
	return head;
}
Node* NBAAssistSort(Node* head)
{
	assert(!NBAEmpty(head));
	//类似冒泡
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
	printf("按助攻排序成功\n");
	return head;
}
void NBADestroy(Node* head)
{
	assert(head);
	free(head->next);
	head->next = NULL;
}
