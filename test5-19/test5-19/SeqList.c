
#include"SeqList.h"
#include<malloc.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
#include<stdio.h>
//初始化
void SeqListInit(SeqList* ps, int capicity)
{
	assert(ps);
	capicity = capicity <= 3 ? 3 : capicity;
	ps->capicity = capicity;
	ps->size = 0;
	ps->array = (SLDateType*)malloc(sizeof(SLDateType)*capicity);
	if (ps->array == NULL)
	{
		printf("%s\n", strerror(errno));
	}

}
//容量查询，满了扩容
//O(1)
int CheckCapicity(SeqList* ps)
{
	//assert(ps);
	//if (ps->capicity > ps->size)
	//{
	//	return;
	//}
	////扩容
	//SLDateType* pf = (SLDateType*)realloc(ps->array, sizeof(SLDateType)*(ps->capicity*2));
	//if (pf == NULL)
	//{
	//	return 0;
	//}
	//ps->array = pf;
	//ps->capicity *= 2;
	//return 1;
	assert(ps);
	if (ps->size == ps->capicity)
	{
		int newCapicity = ps->capicity * 2;
		SLDateType* pf = (SLDateType)malloc(ps->capicity * sizeof(SLDateType));
		if (pf == NULL)
			return 0;
		free(ps->array);
		ps->array = pf;
		ps->capicity = newCapicity;
	}
	return 1;
}
//头插
//O(N)
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	if(!CheckCapicity(ps))
		return ;
	int i = ps->size;
	for (i = ps->size; i > 0; i--)
	{
		ps->array[i] = ps->array[i - 1];
	}
	ps->array[0] = x;
	ps->size++;
}
//头删
//O(N)
void SeqListPopFront(SeqList* ps)
{
	assert(ps);
	int i = 1;
	for (i = 1; i < ps->size; i++)
	{
		ps->array[i - 1] = ps->array[i];
	}
	ps->size--;
}
//位置检测在有效返回1
int Checkpos(SeqList* ps, int pos)
{
	if (pos <= ps->size&&pos>=0)
	{
		return 1;
	}
	return 0;
}

//任意位置插入
void SeqListInsert(SeqList* ps,int pos, SLDateType x)
{
	assert(ps);
	if(!CheckCapicity(ps))
		return ;
	if (Checkpos(ps, pos) == 0)
		return;
	int i = pos-1;
	for (i = pos-1; i <ps->size ; i++)
	{
		ps->array[i+1] = ps->array[i];
	}
	ps->array[pos - 1] = x;
	ps->size++;

	//[pos,size)
	/*int i = ps->size - 1;
	for (i; i >= pos; i--)
		ps->array[i + 1] = ps->array[i];
	ps->array[pos] = x;
	ps->size++;*/
	
}
//任意位置删除
void SeqListErase(SeqList* ps,int pos)
{
	assert(ps);
	if (Checkpos(ps, pos) == 0)
		return;
	/*if (pos == -1)
		return;*/
	/*int i = pos - 1;
	for (i = pos - 1; i <ps->size-1 ; i++)
	{
		ps->array[i] = ps->array[i + 1];
	}
	ps->size--;*/

	//[pos+1,size)
	int i = pos + 1;
	for (i; i < ps->size; i++)
		ps->array[i - 1] = ps->array[i];
	ps->size--;
	
}
//尾插 O(1)
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	if(!CheckCapicity(ps))
		return ;
	ps->array[ps->size] = x;
	ps->size++;
}
//尾删 O(1)
void SeqListPopBack(SeqList* ps)
{
	assert(ps);
	if (0 == SeqListEmpty(ps))
	{
		return;
	}
	ps->size--;
}
//销毁 O(1)
void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->array);
	ps->array = NULL;
	ps->size = 0;
}
//顺序表查找 //找到返回下标没找到返回-1 O(N)
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->array[i] == x)
			return i;
	}
	return -1;
}
//检查容量 O(1)
int SeqListCapicity(SeqList* ps)
{
	assert(ps);
	return ps->capicity;
}
//检查位置 O(1)
int SeqListSize(SeqList* ps)
{
	assert(ps);
	return ps->size;
}
//检查是否为空 O(1)
int SeqListEmpty(SeqList* ps)
{
	assert(ps);
	if (ps->size == 0)
		return 0;
	return 1;
}
//清空 O(1)
void SeqListClear(SeqList* ps)
{
	assert(ps);
	ps->size = 0;
}
////////////////////////////////////////////
///////测试
void SeqListPrint(SeqList* ps)
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->array[i]);
	}
	printf("\n");
}
void Test()
{
	SeqList s;
	SeqListInit(&s, 2);
	//SeqListPopBack(&s);
	//SeqListPushFront(&s, 1);
	////SeqListPopBack(&s);
	//SeqListPushFront(&s, 2);
	//SeqListPushFront(&s, 3);
	//SeqListPrint(&s);
	//SeqListErase(&s, 2);
	//SeqListInsert(&s, 2,10);
	SeqListPushFront(&s, 1);
	SeqListPushFront(&s, 2);
	SeqListPushFront(&s, 3);
	SeqListPushFront(&s, 4);
	SeqListPushFront(&s, 1);
	SeqListErase(&s, SeqListFind(&s, 4));


	SeqListDestroy(&s);
}
