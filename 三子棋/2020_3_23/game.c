#include"game.h"
void InitArray(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void PrintArray(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
	}
	printf("\n");
	
}
//   |   |  
//---|---|---
//   |   |   
//---|---|---
//   |   |
void DisPlayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印第一部分的数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//分割线
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}

}
void PlayMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("玩家请落子:");
	while (1)
	{
		scanf("%d %d", &x, &y);
		//判断落子合法性
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '#';
				break;
			}
			else {
				printf("坐标被占用,请重新输入:");
			}
		}
		else
		{
			printf("坐标输入非法，请重新输入:\n");
		}
	}

}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
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

void PlayComputer(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("电脑落子:\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (x >= 0 && y >= 0 && board[x][y] == ' ')
		{
			board[x][y] = '@';
			break;
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (1 == IsFull(board, ROW, COL))
		return 'Q';
	return 'C';
	
}