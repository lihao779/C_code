#define _CRT_SECURE_NO_WARNINGS
#include"NBA.h"
#include<stdio.h>
#include<Windows.h>

void menu()
{
	printf("**********************************************\n");
	printf("**1.Input        2.Savef         3.Writef   **\n");
	printf("**4.Modify       5.Insert        6.Delte    **\n");
	printf("**7.Find         8.BlockSort     9.ScoreSort**\n");
	printf("**10.AssistSort  11.Print        0.Eixt     **\n");
	printf("**********************************************\n");
}

void sys_menu()
{
	menu();
	int choose = 0;
	Node cur = { 0 };
	Node* head = &cur;
	do
	{
		
		printf("请选择：");
		scanf("%d", &choose);
		switch (choose)
		{
		case Input:
			head = NBAInput();
			break;
		case Savef:
			Savei(head);
			break;
		case Writef:
			Readi(head);
			break;
		case Modify:
			head = NBAModify(head);
			break;
		case Insert:
			head = NBAInsert(head);//必须有元素才可以插入
			break;
		case Delte:
			head = NBADelte(head);
			break;
		case Find:
			NBAFind(head);
			break;
		case BlockSort:
			head = NBABlockSort(head);
			break;
		case ScoreSort:
			head = NBAScoreSort(head);
			break;
		case AssistSort:
			head = NBAAssistSort(head);
			break;
		case Print:
			NBAPrint(head);
			break;
		case Eixt:
			NBADestroy(head);
			printf("退出程序\n");
			break;
		default:
			printf("选择错误重新选择\n");
			break;
		}
	} while (choose);
}


void menustart()
{
	system("cls");
	int choose = 0;
	printf("\n\n");
	printf("\t\t|------------------------------|\n");
	printf("\t\t|--欢迎来到NBA球员管理系统^-^--|\n");
	printf("\t\t|---Basketball Never Stop!-----|\n");
	printf("\t\t|------------------------------|\n");
	printf("\t\t|---------注册-请按1-----------|\n");
	printf("\t\t|---------登陆-请按2-----------|\n");
	printf("\t\t|---------退出-请按0-----------|\n");
	printf("\t\t|------------------------------|\n");
	
	do {
		printf("\t请输入您的选择: ");
		scanf("%d", &choose);
		switch (choose)
		{
		case 0:
			printf("\t\t您已成功退出！欢迎下次再来！\n");
			break;
		case 1:
			sign();
			break;
		case 2:
			login();
			break;
		default:
			printf("\t\t您输入有误哟~请重新选择^o^ \n");
			break;
		}
	} while (choose);
	
}


int main()
{
	menustart();
	return 0;
}