////本题要求编写程序，计算交错序列 1 - 2 / 3 + 3 / 5 - 4 / 7 + 5 / 9 - 6 / 11 + ... 的前N项之和。
//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	scanf("%d", &n);
//	double flag = 1.0;
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		//写出每一位并累加
//		double num = i*flag / (2 * i - 1);
//		sum += num;
//		flag = -flag;
//	}
//	printf("%.3lf\n", sum);
//}
//给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。
//输出满足条件的的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//遍历n-n+3求所需要的数字
//	int i = n;
//	int found = 0;
//	//第一位数字
//	for (i = n; i <= n + 3; i++)
//	{
//		//第二位数字
//		int k = n;
//		for (k = n;k<=n+3;k++)
//		{
//			//第三位数字
//			int j = n;
//			for (j = n; j <= n + 3; j++)
//			{
//				if (j != k&&k != i&&j!=i)
//				{
//					printf("%d%d%d", i, k, j);
//					found++;
//					if (found % 6 == 0)
//					{
//						printf("\n");
//					}
//					else
//					printf(" ");
//				}
//			}
//		}
//	}
//}
//黑洞数也称为陷阱数，又称“Kaprekar问题”，是一类具有奇特转换特性的数。
//
//任何一个各位数字不全相同的三位数，经有限次“重排求差”操作，总会得到495。最后所得的495即为三位黑洞数。所谓“重排求差”操作即组成该数的数字重排后的最大数减去重排后的最小数。（6174为四位黑洞数。）
//
//例如，对三位数207：
//
//第1次重排求差得：720 - 27 ＝ 693；
//第2次重排求差得：963 - 369 ＝ 594；
//第3次重排求差得：954 - 459 ＝ 495；
//以后会停留在495这一黑洞数。如果三位数的3个数字全相同，一次转换后即为0。
//
//任意输入一个三位数，编程给出重排求差的过程。
//核心：输入一个数；重排个最大数-最小数
//#include<stdio.h>
////
//int Max_Min(int arr[],int count)
//{
//	int a = 0;
//	int k = 1;
//	int i = 0;
//	for (i = 0; i < count; i++)
//	{
//
//		int t = arr[i] * k;
//		k *= 10;
//		a += t;
//	}
//	return a;
//}
//
//void test1(int arr[], int count)
//{
//	int i = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		//每次比较次数
//		int k = 0;
//		for (k = 0; k < count - 1 - i; k++)
//		{
//			if (arr[k] > arr[k + 1])//小的在前 大的在后
//			{
//				int temp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = temp;
//			}
//		}
//	}
//}
//void test2(int arr[], int count)
//{
//	int i = 0;
//	for (i = 0; i < count - 1; i++)
//	{
//		//每次比较次数
//		int k = 0;
//		for (k = 0; k < count - 1 - i; k++)
//		{
//			if (arr[k] < arr[k + 1])//大的在前 小的在后
//			{
//				int temp = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int mmo = 1;
//	while (n!=495)
//	{
//		//分离每一位，
//		int arr[100] = { 0 };
//		int i = 0;
//		int temp = n;
//		int count = 0;//标记位数
//		while (temp>0)
//		{
//			arr[i] = temp % 10;
//			count++;
//			temp /= 10;
//			i++;
//		}
//		//判断大小，大的储存在后面小的储存在前面
//		//冒泡排序
//		test1(arr, count);
//		//求最大排列值
//		int ret1 = Max_Min(arr, count);
//		//printf("%d", ret1);
//		test2(arr, count);
//		//最小排列数
//		int ret2 = Max_Min(arr, count);
//		//printf("%d", ret2);
//			n = ret1 - ret2;
//		printf("%d: %d - %d = %d\n",mmo++,ret1, ret2, n);
//	}
//}
////本题要求计算并输出不超过n的最大的k个素数以及它们的和。
#include<stdio.h>
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int sum = 0;
	//倒着求素数
	while (k&&n >2)
	{
		//判断i是否为素数
		//int i = n;
		for (; n >= 2; n--)
		{
			int j = 0;
			for (j = 2; j < n; j++)
			{
				if (n%j == 0)
				{
					break;
				}
			}
			if (j == n)
			{
				printf("%d", n);
				sum += n;
				k--;
				if (k == 0||n>=2)
				{
					break;
				}
				printf("+");
			}
		}
	}
	printf("=%d", sum);
}
//你的程序要读入一行文本，其中以空格分隔为若干个单词，以.结束。你要输出每个单词的长度。这里的单词与语言无关，
//可以包括各种符号，比如it's算一个单词，长度为4。注意，行中可能出现连续的空格；最后的.不计算在内。
//#include<stdio.h>
//int main()
//{
//	char c;
//	int count = 0;
//	while ((c = getchar()) != '.')
//	{
//		//以空格分割 计算每一位位数
//		if (c != ' ')
//		{
//			count++;
//		}
//		//出现空格就打印出count并且让count还原为0；
//		else
//		{
//			printf("%d ", count);
//			count = 0;
//		}
//	}
//	//遇到‘.’自动退出但没有打印最后一位-打印最后一位且没有后面空格
//	printf("%d", count);
//}
//#include<stdio.h>
//int main()
//{
//	char c;
//	int count = 0;
//	//while
//	while ((c = getchar()) != '.')
//	{
//		while (c != ' ')
//		{
//			//以空格分割 计算每一位位数
//				count++;
//				if (c = '.')
//					break;
//		}
//		printf("%d ", count);
//		count = 0;
//		while (c == ' ');
//		
//	}
//	//遇到‘.’自动退出但没有打印最后一位-打印最后一位且没有后面空格
//	printf("%d", count);
//}
//
