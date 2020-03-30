//猜数字 游戏
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
//	//printf("猜数字\n");
//	//1.生成随机数
//	int ret = rand()%100+1;
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请输入你的猜测：");
//		int guess = 1;
//		scanf("%d", &guess);
//		if (guess == ret)
//		{
//			printf("恭喜你，猜对了\n"); break;
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜小了\n");
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));//时间戳当随机数；
//	int choose = 1;
//	do
//	{
//		menu();
//		printf("请选择->");
//		scanf("%d", &choose);
//		if (choose == 1)
//		{
//			game();
//		}
//		else if (choose == 0)
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误\n");
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