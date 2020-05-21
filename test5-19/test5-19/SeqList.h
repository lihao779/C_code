#pragma once

typedef int SLDateType; 
typedef struct SeqList
{
	SLDateType* array;//��̬��������
	int size;//��ǰλ��
	int capicity;//������
}SeqList;

//��ʼ��
void SeqListInit(SeqList* ps,int capicity);
//������ѯ����������
void CheckCapicity(SeqList* ps);
//ͷ��
void SeqListPushFront(SeqList* ps, SLDateType x);
//ͷɾ
void SeqListPopFront(SeqList* ps);
//����λ�ò���
void SeqListInsert(SeqList* ps, int pos,SLDateType x);
//����λ��ɾ��
void SeqListErase(SeqList* ps,int pos);
//β��
void SeqListPushBack(SeqList* ps, SLDateType x);
//βɾ
void SeqListPopBack(SeqList* ps);
//����
void SeqListDestroy(SeqList* ps);
//˳������
int SeqListFind(SeqList* ps, SLDateType x);
//�������
int SeqListCapicity(SeqList* ps);
//���λ��
int SeqListSize(SeqList* ps);
//����Ƿ�Ϊ��
int SeqListEmpty(SeqList* ps);
//���
void SeqListClear(SeqList* ps);
