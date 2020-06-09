#pragma once


typedef int SDateType;
typedef struct
{
	SDateType* date;
	int capacity;
	int top;//栈顶
}Stack;


//初始化
void StackInit(Stack* ps);

//入栈
void StackPush(Stack* ps, SDateType date);

//出栈
void StackPop(Stack* ps);

//判空
int StackEmpty(Stack* ps);

//求栈顶元素
SDateType StackTop(Stack* ps);

//求栈元素个数
int StackSize(Stack* ps);

//销毁
void StackDestory(Stack* ps);