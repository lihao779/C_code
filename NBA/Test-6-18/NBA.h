#pragma once

enum MyEnum
{
	Eixt,//�˳�
	Input,//����¼��
	Savef,//���ݱ���
	Writef,//���ݶ���
	Modify,//�����޸�
	Insert,//���ݲ���
	Delte,//����ɾ��
	Find,//���ݲ���
	BlockSort,//��������
	ScoreSort,//�÷�����
	AssistSort,//��������
	Print//���ݴ�ӡ
};

 
typedef struct nba
{
	char name[20];//��Ա����
	char team[20];//�������
	int num;//��Ա����
	float score;//�÷�
	float block;//����
	float assist;//����
}nba;
typedef nba Datetype;
typedef struct Node
{
	Datetype date;
	struct Node* next;
}Node;

typedef struct NAME
{
	char name[50];
	char pwd[50];
}Name;

//sys-menu
void sys_menu();
void menustart();

void Savei(Node* head);//д�ļ�
void Readi(Node* head);//���ļ�������head������ȥ��
Node* NBAInput();//ֻ��¼��һ��
Node* NBAModify(Node* head);
Node* NBAInsert(Node* head);
Node* NBADelte(Node* head); 
void NBAFind(Node* head);
void NBAPrint(Node* head);
Node* NBABlockSort(Node* head);
Node* NBAScoreSort(Node* head);
Node* NBAAssistSort(Node* head);
void NBADestroy(Node* head);
//user

//��¼
void login();
//ע��
void sign();

