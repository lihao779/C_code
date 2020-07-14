
#include"Stack.h"
#include<assert.h>
#include<malloc.h>

void StackInit(Stack* ps)
{
	assert(ps);
	ps->array = (SDateType*)malloc(sizeof(SDateType) * 3);
	if (ps->array == NULL)
	{
		assert(0);
		return;
	}
	ps->top = 0;
	ps->capacity = 3;
}
void CheckCapacity(Stack* ps)
{
	if (ps->capacity > ps->top)
		return;
	SDateType* arr=(SDateType*)realloc(ps->array, ps->capacity * 2*sizeof(SDateType));
	if (arr == NULL)
	{
		assert(0);
		return;
	}
	ps->array = arr;
	ps->capacity = ps->capacity * 2;
	
}

//入栈：尾插
void StackPush(Stack* ps, SDateType date)
{
	assert(ps);
	
		CheckCapacity(ps);
		//扩容
	
	ps->array[ps->top] = date;
	ps->top++;

}


//出栈：尾删
void StackPop(Stack* ps)
{
	assert(ps);
	ps->top--;
}


//获取栈顶元素
SDateType StackTop(Stack* ps)
{
	assert(!StackEmpty(ps));
	return ps->array[ps->top-1];
}


//获取有效元素个数
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}

//看是否为空
int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}


//销毁栈
void StackDestroy(Stack* ps)
{
	assert(ps);
	if (ps->top == 0)
		return;
	free(ps->array);
	ps->array = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

