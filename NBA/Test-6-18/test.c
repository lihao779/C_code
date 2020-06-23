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
		
		printf("��ѡ��");
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
			head = NBAInsert(head);//������Ԫ�زſ��Բ���
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
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
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
	printf("\t\t|--��ӭ����NBA��Ա����ϵͳ^-^--|\n");
	printf("\t\t|---Basketball Never Stop!-----|\n");
	printf("\t\t|------------------------------|\n");
	printf("\t\t|---------ע��-�밴1-----------|\n");
	printf("\t\t|---------��½-�밴2-----------|\n");
	printf("\t\t|---------�˳�-�밴0-----------|\n");
	printf("\t\t|------------------------------|\n");
	
	do {
		printf("\t����������ѡ��: ");
		scanf("%d", &choose);
		switch (choose)
		{
		case 0:
			printf("\t\t���ѳɹ��˳�����ӭ�´�������\n");
			break;
		case 1:
			sign();
			break;
		case 2:
			login();
			break;
		default:
			printf("\t\t����������Ӵ~������ѡ��^o^ \n");
			break;
		}
	} while (choose);
	
}


int main()
{
	menustart();
	return 0;
}