//��������Ϸ

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
	//1.��ʼ������
	InitArray(board, ROW, COL);
	//��ӡ����
	//PrintArray(board, ROW, COL);
	//2.��ӡ����
	DisPlayboard(board, ROW, COL);
	//��������
	//���-#  ����-@
	while(1)
	{
		//�������
		PlayMove(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		PlayComputer(board, ROW, COL);
		DisPlayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '@')
		printf("����Ӯ\n");
	else if (ret == '#')
		printf("���Ӯ\n");
	else
		printf("ƽ��\n");
}
void test()
{
	srand((unsigned int)time(NULL));
	int choose = 1;
	do 
	{
		meun();
		printf("�����ѡ��->");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			game();
			//printf("��������Ϸ\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while (choose);
}

int main()
{
	printf("��������Ϸ\n");
	test();
}