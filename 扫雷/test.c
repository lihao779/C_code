#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("**  1.play  0.exit **\n");
	printf("*********************\n");
}
void game()
{
	//布置好雷的信息
	char mine[ROWS][COLS] = { 0 };
	//排查雷的信息
	char show[ROWS][COLS] = { 0 };
	//初始化
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//打印
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//布雷
	Setmine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);
	FindMine(mine,show, ROW, COL);


}
void test()
{
	srand((unsigned int)time(NULL));
	int choose;
	do {
		menu();
		printf("请选择->");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			//printf("扫雷");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default :
			printf("输入错误，请重新输入\n");
			break;
		}


	} while (choose);
}
int main()
{
	test();
	return 0;
}