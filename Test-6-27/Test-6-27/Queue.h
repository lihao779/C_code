#pragma once
#include"BinaryTree.h"
typedef BTNode* QDateType;
typedef struct QNode
{
	struct QNode* next;
	QDateType date;
}QNode;
typedef struct Queue
{
	QNode* front;
	QNode* rear;
}Queue;


//��ʼ������
void DequeueInit(Queue* ps);
//�����
void DequeuePush(Queue* ps, QDateType date);
//������
void DequeuePop(Queue* ps);
//��ȡ����ͷ��Ԫ��
QDateType DequeueFront(Queue* ps);
//��ȡ����β��Ԫ��
QDateType DequeueBack(Queue* ps);
//�ж϶����Ƿ�Ϊ��
int DequeueEmpty(Queue* ps);
//��ȡ��������ЧԪ�ظ���
int DequeueSize(Queue* ps);
//���ٶ���
void DequeueDestory(Queue* ps);
