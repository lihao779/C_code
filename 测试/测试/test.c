//������ ��Ϸ
//
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("**********************\n");
//	printf("** 1.play    0.exit **\n");
//	printf("**********************\n");
//}
//void game()
//{
//	//printf("������\n");
//	//1.���������
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("��������Ĳ²⣺");
//		int guess = 1;
//		scanf("%d", &guess);
//		if (guess == ret)
//		{
//			printf("��ϲ�㣬�¶���\n"); break;
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��С��\n");
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//ʱ������������
//	int choose = 1;
//	do
//	{
//		menu();
//		printf("��ѡ��->");
//		scanf("%d", &choose);
//		if (choose == 1)
//		{
//			game();
//		}
//		else if (choose == 0)
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	
//	} while (1);
//	return 0;
//}
#include<stdio.h>
int main()
{
	char a = -1;
	signed char b = -1;
	unsigned char c = -1;
	printf(" %d %d %d %d\n", a, b, c,sizeof(float));
}