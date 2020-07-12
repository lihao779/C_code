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
//��ʼ������
void DequeueInit(Queue* ps)
{
	assert(ps);
	ps->front = ps->rear = NULL;
}
//�����
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
//������
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
//��ȡ����ͷ��Ԫ��
QDateType DequeueFront(Queue* ps)
{
	assert(!DequeueEmpty(ps));
	return ps->front->date;
}
//��ȡ����β��Ԫ��
QDateType DequeueBack(Queue* ps)
{
	assert(!DequeueEmpty(ps));
	return ps->rear->date;
}
//�ж϶����Ƿ�Ϊ��
int DequeueEmpty(Queue* ps)
{
	assert(ps);
	return ps->front == NULL;
}
//��ȡ��������ЧԪ�ظ���
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
//���ٶ���
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