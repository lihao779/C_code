#include"game.h"
void menu()
{
	printf("*********************\n");
	printf("**  1.play  0.exit **\n");
	printf("*********************\n");
}
void game()
{
	//���ú��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//�Ų��׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//����
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
		printf("��ѡ��->");
		scanf("%d", &choose);
		switch (choose)
		{
		case 1:
			//printf("ɨ��");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default :
			printf("�����������������\n");
			break;
		}


	} while (choose);
}
int main()
{
	test();
	return 0;
}