#pragma once

enum MyEnum
{
	Eixt,//退出
	Input,//数据录入
	Savef,//数据保存
	Writef,//数据读出
	Modify,//数据修改
	Insert,//数据插入
	Delte,//数据删除
	Find,//数据查找
	BlockSort,//篮板排序
	ScoreSort,//得分排序
	AssistSort,//助攻排序
	Print//数据打印
};

 
typedef struct nba
{
	char name[20];//球员姓名
	char team[20];//所在球队
	int num;//球员号码
	float score;//得分
	float block;//篮板
	float assist;//助攻
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

void Savei(Node* head);//写文件
void Readi(Node* head);//读文件（读到head链表中去）
Node* NBAInput();//只能录入一次
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

//登录
void login();
//注册
void sign();

