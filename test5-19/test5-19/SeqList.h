#pragma once

typedef int SLDateType; 
typedef struct SeqList
{
	SLDateType* array;//动态开辟数据
	int size;//当前位置
	int capicity;//总容量
}SeqList;

//初始化
void SeqListInit(SeqList* ps,int capicity);
//容量查询，满了扩容
void CheckCapicity(SeqList* ps);
//头插
void SeqListPushFront(SeqList* ps, SLDateType x);
//头删
void SeqListPopFront(SeqList* ps);
//任意位置插入
void SeqListInsert(SeqList* ps, int pos,SLDateType x);
//任意位置删除
void SeqListErase(SeqList* ps,int pos);
//尾插
void SeqListPushBack(SeqList* ps, SLDateType x);
//尾删
void SeqListPopBack(SeqList* ps);
//销毁
void SeqListDestroy(SeqList* ps);
//顺序表查找
int SeqListFind(SeqList* ps, SLDateType x);
//检查容量
int SeqListCapicity(SeqList* ps);
//检查位置
int SeqListSize(SeqList* ps);
//检查是否为空
int SeqListEmpty(SeqList* ps);
//清空
void SeqListClear(SeqList* ps);
