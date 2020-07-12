#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	for (int j = 0; j < row; j++)
	{
		//打印一行数据
		for (int i = 0; i < col; i++)
		{
			printf(" %c ", board[j][i]);
			if (i < col - 1)
				printf("|");
		}
		printf("\n");
		//打印分割线
		if (j < row - 1)
		{
			for (int i = 0; i < col; i++)
			{
				printf("---");
				if (i < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}

	}
}
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("玩家请落子->");
	do {
		scanf("%d %d", &x, &y);
		if (x <= row&&x >= 1 && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else {
				printf("坐标被占有,重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	} while (1);
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("电脑走>\n");
	while (1)
	{
		int x, y;
		x = rand() % row;
		y = rand() % col;
		if (x >= 0 && y >= 0)
		{
			if (board[x][y] == ' ')
			{
				board[x][y] = '@';
				break;
			}

		}
	}
}//   1.>>有除2效果 2.<<有乘2效果
 //玩家赢返回#
 //电脑赢返回@
 //平局返回 Q
 //继续返回 C
int IsFull(char board[ROW][COL], int row, int col)
{//满了返回1
	int j = 0;
	int i = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
			return board[1][j];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (1 == IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}
