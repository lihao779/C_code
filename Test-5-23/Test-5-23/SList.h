#pragma once

typedef int SLDateType;

typedef struct SListNode
{
	SLDateType date;
	struct SListNode* next;
}SListNode;

void SListPushBack(SListNode** head, SLDateType date);
void SListPopBack(SListNode** head);
void SListPushFront(SListNode** head, SLDateType date);
void SListPopFront(SListNode** head);


void SListInsertAfter(SListNode* pos, SLDateType date);
void SListEraseAfter(SListNode* pos);


int SListEmpty(SListNode* head);
int SListSize(SListNode* head);
SListNode* SListFind(SListNode* head, SLDateType date);
void SListDestroy(SListNode** head);
///////////////
//void TestSList(); 
void TestList1();