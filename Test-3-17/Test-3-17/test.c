
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
	//��������
	char board[ROW][COL] = {0};
	//��ʼ�����飻
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	while (1)
	{
		//����
		//�������#
		PlayMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		 ret = IsWin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//��������@
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board ,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '#')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '@')
		printf("����Ӯ\n");
	else if(ret =='Q')
	{
		printf("ƽ��\n");
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
		printf("��ѡ��->");
		angin:
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("�������,����������\n");
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