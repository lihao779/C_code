#pragma once



/*
��̬ջ
#define MAXS 100
typedef int SDateType;
typdef struct Stack
{
	SDateType array[MAXS];
	int top;
}Stack;
*/
typedef int SDateType;
typedef struct Stack
{
	SDateType* array;
	int capacity;
	int top;//ջ����
}Stack;

void StackInit(Stack* ps);


//��ջ��β��
void StackPush(Stack* ps,SDateType date);


//��ջ��βɾ
void StackPop(Stack* ps);


//��ȡջ��Ԫ��
SDateType StackTop(Stack* ps);


//��ȡ��ЧԪ�ظ���
int StackSize(Stack* ps);

//���Ƿ�Ϊ��
int StackEmpty(Stack* ps);


//����ջ
void StackDestroy(Stack* ps);


