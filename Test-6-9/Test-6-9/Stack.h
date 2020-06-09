#pragma once


typedef int SDateType;
typedef struct
{
	SDateType* date;
	int capacity;
	int top;//ջ��
}Stack;


//��ʼ��
void StackInit(Stack* ps);

//��ջ
void StackPush(Stack* ps, SDateType date);

//��ջ
void StackPop(Stack* ps);

//�п�
int StackEmpty(Stack* ps);

//��ջ��Ԫ��
SDateType StackTop(Stack* ps);

//��ջԪ�ظ���
int StackSize(Stack* ps);

//����
void StackDestory(Stack* ps);