#include"Stack.h"
#include<malloc.h>
#include<stdio.h>
#include<assert.h>
#include<string.h>
//初始化
void StackInit(Stack* ps)
{
	assert(ps);
	ps->date = (SDateType*)malloc(sizeof(SDateType) * 3);
	if (ps->date == NULL)
	{
		assert(0);
		return;
	}
	else
	{
		ps->capacity = 3;
		ps->top = 0;
	}
}

void StackCheck(Stack* ps)
{
	assert(ps);

	if (ps->top == ps->capacity)
	{
		//1.申请新空间
		SDateType*  newNode = (SDateType*)malloc(sizeof(SDateType)*ps->capacity * 2);

		//2.拷贝元素
		if (newNode == NULL)
		{
			assert(0);
			return;
		}
		else
		{
			memcpy(newNode, ps->date, sizeof(SDateType)*ps->top);
		}
		//3.释放旧空间
		free(ps->date);
		
		//4.使用新空间
		ps->date = newNode;
		ps->capacity *= 2;
	}
#if 0 
	if (ps->top == ps->capacity)
	{
		SDateType* new = (SDateType*)realloc(ps->date, sizeof(SDateType)*ps->capacity * 2);
		if (new == NULL)
		{
			assert(0);
			return;
		}
		else
		{
			ps->date = new;
			ps->capacity *= 2;
		}
	}
#endif
}
//入栈
void StackPush(Stack* ps, SDateType date)
{
	StackCheck(ps);
	ps->date[ps->top++] = date;

}

//出栈
void StackPop(Stack* ps)
{
	if (StackEmpty(ps))
		return;
	ps->top--;
}

//判空
int StackEmpty(Stack* ps)
{
	assert(ps);
	return ps->top == 0;
}

//求栈顶元素
SDateType StackTop(Stack* ps)
{
	assert(!StackEmpty(ps));
	return ps->date[ps->top - 1];
}

//求栈元素个数
int StackSize(Stack* ps)
{
	assert(ps);
	return ps->top;
}

//销毁
void StackDestory(Stack* ps)
{
	free(ps->date);
	ps->date = NULL;
	ps->capacity = 0;
	ps->top = 0;
}

////////////////
void Test()
{
	Stack s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);
	printf("%d\n", StackTop(&s));
	printf("%d\n", StackSize(&s));

	StackPop(&s);
	StackPop(&s);
	printf("%d\n", StackTop(&s));
	printf("%d\n", StackSize(&s)); 
	printf("%d\n", StackEmpty(&s));

	StackDestory(&s);

}
