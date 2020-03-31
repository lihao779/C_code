//#include<stdio.h>
//输入一个整数数组，实现一个函数，
//
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//
//所有偶数位于数组的后半部分。
//void test(int arr[], int n)
//{
//	//left 从前面找偶数 right从后面找奇数 
//	//都找到就交换
//	int right = n - 1;
//	int left = 0;
//	while (left < right)
//	{
//		//从前往后找偶数，找到就跳出
//		for (; left < n; left++)
//		{
//			if (arr[left] % 2 == 0)
//			{
//				break;
//			}
//		}
//		//从后往前找奇数，找到就跳出
//		for (; right >= 0; right--)
//		{
//			if (arr[right] % 2 == 1)
//			{
//				break;
//			}
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//void test(int arr[], int n)
//{
//	int left = 0;
//	int right = n - 1;
//	while (left < right)
//	{
//		//从前面判断偶数
//		while (arr[left] % 2 == 0 && left < right)
//		{
//			left++;
//		}
//		//从后面判断奇数
//		while (arr[right] % 2 == 1 && left < right)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//		}
//	}
//}
//void print(int arr[], int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(int);
//	test(arr, sz);
//	print(arr, sz);
//	return 0;
//}
////对于给定的正整数N，求它的位数及其各位数字之和。
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//求位数
//	int count = 0;
//	int sum = 0;
//	while (num)
//	{
//		sum += num % 10;
//		num /= 10;
//		count++;
//	}
//	printf("%d %d\n", count, sum);
//}
////水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153=1^3+5^3+3^3 本题要求编写程序, 计算所有N位水仙花数。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//输入n打印出n位所有数
//	int i = 1;
//	int p = n;
//	while (--p)
//	{
//		i *= 10;
//	}
//	//printf("%d", i);
//	//i = 153;
//	int j = i;
//	//遍历每一个n位数字
//	for (; i < j * 10; i++)
//	{
//		int temp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		while (temp > 0)
//		{
//			int k = temp % 10; //分离出每一位
//				int l = k;
//			temp /= 10;
//			int m = 1;
//			for (m = 1; m < n; m++)
//			{
//				k *=l ;
//			}
//			sum += k;	
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//}
//彩票的号码有 6 位数字，若一张彩票的前 3 位上的数之和等于后 3 位上的数之和，则称这张彩票是幸运的。本题就请你判断给定的彩票是不是幸运的。
#include<stdio.h>
int main()
{
	int n = 0;
	int a, b, c, d, e, f;
	scanf("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f);
		if (a + b + c == f + d + e)
		{
			printf("You are luck!\n");
		}
		else
		{
			printf("Wish you good luck.\n");
		}
	}
}