#define _CRT_SECURE_NO_WARNINGS
#include"NBA.h"
#include<stdio.h>
#include<Windows.h>
#include<assert.h>
void process()
{
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t��ϲ��½�ɹ�����˾�������ˣ���������NBA�����磬ϵ�ð�ȫ��������\n");
	Sleep(1100);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t�Ʊ�.��������---==�ԡ� ...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t����Ҳ�ܽ���\n...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t��(�����)��~ ...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t����������ʵʵ ...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t�����ܹھ���)�� !\n");
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t���ǻε����ղ��ʣ�����...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t�����߲��� !\n");
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\tThis is why we play ! \n");
	printf("\t\t3...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t2..\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t1.\n");
	Sleep(400);
	system("cls");

	printf("\n\n\n\n\n\n\n");
	printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("\t\t~********************************************************************************~\n");
	printf("\t\t~  *      *      *  * * * *  *        * * *    * * *       *     *     * * * *   ~\n");
	printf("\t\t~  *      *      *  *        *       *       *       *    * *   * *    *         ~\n");
	printf("\t\t~   *     *     *   * * * *  *      *       *         *  *   * *   *   * * * *   ~\n");
	printf("\t\t~    *  *   *  *    *        *       *       *       *  *     *     *  *         ~\n");
	printf("\t\t~     *       *     * * * *  * * * *  * * *    * * *    *     *     *  * * * *   ~\n");
	printf("\t\t~********************************************************************************~\n");
	printf("\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	Sleep(1200);
	printf("\n\n\n\n\n\n\n");
	system("cls");
}

void login()
{
	Name log;
	int flag = 0;
	char name[50] ,pwd[50];
	printf("����������û���\n");
	scanf("%s", name);
	printf("����������\n");
	scanf("%s", pwd);
	FILE* pf = fopen("name.txt", "rb");
	if (pf == NULL)
	{
		assert(0);
		return;
	}
	while (fscanf(pf, "%s %s", log.name, log.pwd)!=EOF)
	{
		if (strcmp(log.name, name) == 0 && strcmp(log.pwd, pwd) == 0)
		{
			flag = 1;
			break;
		}
		else if (strcmp(log.name, name) == 0 && strcmp(log.pwd, pwd) != 0)
		{
			flag = 2;
			break;
		}
		else
		{
			flag = 0;
			continue;
		}
	}
	if (flag == 1)
	{
		process();
		sys_menu();
	}
	else if (flag == 2)
	{
		printf("�����������\n");
		Sleep(400);
		menustart();
	}
	else
	{
		printf("�û�������\n");
		Sleep(400);
		
	}


}


int pd(Name signin)
{
	Name member;
	int flag = 1;
	FILE* pf = fopen("name.txt", "rb");
	if (pf == NULL)
	{
		assert(0);
		return 0;
	}
	while (fscanf(pf, "%s %s", member.name,member.pwd) != EOF)
	{
		if (strcmp(signin.name, member.name) == 0)
		{
			flag = 0;
			break;
		}
		else
		{
			flag = 1;
			continue;
		}
	}
	fclose(pf);
	pf = NULL;
	return flag;
	
}
//ע��
void sign()
{
	Name signin;
	FILE* pf = fopen("name.txt", "ab");
	if (pf == NULL)
	{
		assert(0);
		return;
	}
	printf("�������û���:");
	scanf("%s", signin.name);
	int ret = pd(signin);
	if (ret == 1)
	{
		printf("����������:");
		scanf("%s", signin.pwd);
		fputs(signin.name, pf);
		fputs(" ", pf);
		fputs(signin.pwd, pf);
		fputs(" ", pf);
	}
	else
	{
		printf("�Բ�����ע����û����ظ�������������һ�����ְ�");
		Sleep(800);
	}
	fclose(pf);
	pf = NULL;
	
	
}