
#include"game.h"
void meun()
{
	printf("******************************\n");
	printf("**** 1. play    0.exit    ****\n");
	printf("******************************\n");
}
void game()
{
	char ret;
	//创建数组
	char board[ROW][COL] = {0};
	//初始化数组；
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//下棋
		//玩家下棋#
		PlayMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		 ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋@
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board ,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '#')
	{
		printf("玩家赢\n");
	}
	else if (ret == '@')
		printf("电脑赢\n");
	else if(ret =='Q')
	{
		printf("平局\n");
	}
	//printf("%c", ret);
	
}
void test()
{
	srand((unsigned int)time(NULL));
	int choose;
	do
	{
		meun();
		printf("请选择->");
		angin:
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误,请重新输入\n");
			goto angin;
			break;
		}
	} while (choose);
}
int main()
{
	test();
	return 0;
}