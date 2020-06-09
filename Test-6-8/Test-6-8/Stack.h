#pragma once



/*
静态栈
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
	int top;//栈顶；
}Stack;

void StackInit(Stack* ps);


//入栈：尾插
void StackPush(Stack* ps,SDateType date);


//出栈：尾删
void StackPop(Stack* ps);


//获取栈顶元素
SDateType StackTop(Stack* ps);


//获取有效元素个数
int StackSize(Stack* ps);

//看是否为空
int StackEmpty(Stack* ps);


//销毁栈
void StackDestroy(Stack* ps);


