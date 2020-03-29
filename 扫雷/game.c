#include"game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols,char str)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = str;
		}
	}
}
void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	printf("  ");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int x, y;
	int count = EASY_COUNT;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int get_mine(char mine[ROWS][COLS], int x, int y)
{
	return 	 
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y] +
		mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] +
		mine[x - 1][y + 1] -
		8*'0' ;

}
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int win = 0;
	int x, y;
	while (win<row*col-EASY_COUNT)
	{
		printf("�������Ų��׵�����:>\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ�\n");
				break;
			}
			else
			{
				//����x��y�����м�����
				int count = get_mine(mine, x, y);
				show[x][y] = count + '0';
				Displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ�,���������룡\n");
		}
	}
	if (win == row*col - EASY_COUNT)
	{
		printf("��ϲ�㣬ɨ�׳ɹ�\n");
		Displayboard(mine, row, col);
	}
}