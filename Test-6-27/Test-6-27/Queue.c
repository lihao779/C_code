#include"Queue.h"
#include<assert.h>
#include<malloc.h>
#include<stdio.h>


QNode* BuyNode(QDateType date)
{
	QNode* newNode = (QNode*)malloc(sizeof(QNode));
	if (newNode == NULL)
	{
		assert(0);
		return NULL;
	}
	newNode->date = date;
	newNode->next = NULL;
	return newNode;
}
//初始化队列
void DequeueInit(Queue* ps)
{
	assert(ps);
	ps->front = ps->rear = NULL;
}
//入队列
void DequeuePush(Queue* ps, QDateType date)
{
	assert(ps);
	QNode* newNode = BuyNode(date);
	if (ps->front == NULL)
	{
		ps->front = newNode;
	}
	else
	{
		ps->rear->next = newNode;
	}
	ps->rear = newNode;
}
//出队列
void DequeuePop(Queue* ps)
{
	assert(!DequeueEmpty(ps));
	if (ps->front == ps->rear)
	{
		free(ps->front);
		ps->front = ps->rear = NULL;
	}
	else
	{
		QNode* cur = ps->front;
		ps->front = ps->front->next;
		free(cur);
	}
}
//获取队列头部元素
QDateType DequeueFront(Queue* ps)
{
	assert(!DequeueEmpty(ps));
	return ps->front->date;
}
//获取队列尾部元素
QDateType DequeueBack(Queue* ps)
{
	assert(!DequeueEmpty(ps));
	return ps->rear->date;
}
//判断队列是否为空
int DequeueEmpty(Queue* ps)
{
	assert(ps);
	return ps->front == NULL;
}
//获取队列中有效元素个数
int DequeueSize(Queue* ps)
{
	assert(ps);
	int count = 0;
	QNode* cur = ps->front;
	while (cur)
	{
		count++;
		cur = cur->next;
	}
	return count;
}
//销毁队列
void DequeueDestory(Queue* ps)
{
	assert(ps);
	QNode* cur = ps->front;
	while (cur)
	{
		cur = cur->next;
		free(ps->front);
		ps->front = cur;
	}
	ps->rear = NULL;
}