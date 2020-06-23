#define _CRT_SECURE_NO_WARNINGS
#include"NBA.h"
#include<stdio.h>
#include<Windows.h>
#include<assert.h>
void process()
{
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t恭喜登陆成功！老司机开车了，即将进入NBA的世界，系好安全带，出发\n");
	Sleep(1100);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t科比.布莱恩特---==≡≡ ...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t这球也能进？\n...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t︿(￣︶￣)︿~ ...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t这个大火锅结结实实 ...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t湖人总冠军！)～ !\n");
	Sleep(500);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t哈登晃到了勒布朗！！！...\n");
	Sleep(400);
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t这球走步了 !\n");
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
	printf("请输入你的用户名\n");
	scanf("%s", name);
	printf("请输入密码\n");
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
		printf("密码输入错误\n");
		Sleep(400);
		menustart();
	}
	else
	{
		printf("用户不存在\n");
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
//注册
void sign()
{
	Name signin;
	FILE* pf = fopen("name.txt", "ab");
	if (pf == NULL)
	{
		assert(0);
		return;
	}
	printf("请设置用户名:");
	scanf("%s", signin.name);
	int ret = pd(signin);
	if (ret == 1)
	{
		printf("请设置密码:");
		scanf("%s", signin.pwd);
		fputs(signin.name, pf);
		fputs(" ", pf);
		fputs(signin.pwd, pf);
		fputs(" ", pf);
	}
	else
	{
		printf("对不起，您注册的用户名重复，返回重新想一个名字吧");
		Sleep(800);
	}
	fclose(pf);
	pf = NULL;
	
	
}