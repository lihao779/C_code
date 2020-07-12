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


//初始化队列
void DequeueInit(Queue* ps);
//入队列
void DequeuePush(Queue* ps, QDateType date);
//出队列
void DequeuePop(Queue* ps);
//获取队列头部元素
QDateType DequeueFront(Queue* ps);
//获取队列尾部元素
QDateType DequeueBack(Queue* ps);
//判断队列是否为空
int DequeueEmpty(Queue* ps);
//获取队列中有效元素个数
int DequeueSize(Queue* ps);
//销毁队列
void DequeueDestory(Queue* ps);
