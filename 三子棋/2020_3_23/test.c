//三子棋游戏

#include "game.h"
void meun()
{
	printf("***************************\n");
	printf("*** 1.play      0.exit  ***\n");
	printf("***************************\n");
}
void game()
{
	char ret;
	char board[ROW][COL] = {0};
	//1.初始化数组
	InitArray(board, ROW, COL);
	//打印数组
	//PrintArray(board, ROW, COL);
	//2.打印棋盘
	DisPlayboard(board, ROW, COL);
	//下棋落子
	//玩家-#  电脑-@
	while(1)
	{
		//玩家下棋
		PlayMove(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		PlayComputer(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '@')
		printf("电脑赢\n");
	else if (ret == '#')
		printf("玩家赢\n");
	else
		printf("平局\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int choose = 1;
	do 
	{
		meun();
		printf("玩家请选择->");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			game();
			//printf("三子棋游戏\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (choose);
}

int main()
{
	printf("三子棋游戏\n");
	test();
}