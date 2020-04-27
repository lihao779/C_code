//本题要求编写程序，从给定字符串中查找某指定的字符。
//#include<stdio.h>
//
//int main()
//{
//	char found;
//	char sor[85];
//	scanf("%c\n", &found);
//	char ch;
//	int i = 0;
//	int len = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		if (i < 80)
//		{
//			sor[i] = ch;
//			len++;
//		}
//		else
//			break;
//		i++;
//	}
//	i = len;
//	int flag = 0;
//	//倒着找
//	for (i = len; i >= 0; i--)
//	{
//		if (sor[i] == found)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag)
//	{
//		printf("index = %d", i);
//	}
//	else
//	{
//		printf("Not Found\n");
//	}
//
//}
//输入一个以#结束的字符串，本题要求滤去所有的非十六进制字符（不分大小写），
//组成一个新的表示十六进制数字的字符串，然后将其转换为十进制数后输出。如果在第一个十六进制字符之前存在字符“ - ”，则代表该数是负数。
//#include<stdio.h>
//int main()
//{
//	//输入以#结束的字符串；
//	char str[20];
//	char str1[20];
//	int i = 0;
//	char ch;
//	ch = getchar();
//	while (ch!='#')
//	{
//		str[i] = ch;
//		ch = getchar();
//		i++;
//	}
//	//寻找16进制
//	int j = 0;
//	int k = 0;
//	int flag = 0;
//	for (j = 0; j < i; j++)
//	{
//		if ((str[j] >= '0'&&str[j] <= '9') || (str[j] >= 'a'&&str[j] <= 'f') || (str[j] >= 'A'&&str[j] <= 'F'))
//		{
//			str1[k] = str[j];
//			k++;
//		}
//		else if (str[j] == '-')
//		{
//			flag++;
//		}
//	}
//		//转换
//	int sum = 0;
//	for (i = 0; i < k; i++)
//	{
//		int temp = 0;
//		if (str[i] <= '9')
//		{
//			temp = str[i] - '0';
//			sum += sum * 10 + temp;
//		}
//		else {
//			temp = str[i] - 'a' + 10;
//			sum += sum * 10 + temp;
//		}
//		
//	}
//}
//int  f(int n)//f(8)
//{
//	if (n <= 3)
//		return 1;
//	else
//		return f(n - 2) + f(n - 4) + 1;
//}
//
//本题要求实现一个计算m~n（m<n）之间所有整数的和的简单函数。
//#include <stdio.h>
//int sum(int m, int n);
//int main()
//{
//	int m, n;
//
//	scanf("%d %d", &m, &n);
//	printf("sum = %d\n", sum(m, n));
//
//	return 0;
//}
//int sum(int m, int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = m; i <= n; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//本题要求实现函数输出n行数字金字塔。
//#include <stdio.h>
//
//void pyramid(int n);
//
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//	pyramid(n);
//
//	return 0;
//}
//void pyramid(int n)
//{
//	int i = 0;
//	//n行
//	for (i = 1; i <= n; i++)
//	{
//		//打印空格
//		int j = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("%d ", i);
//		}
//		printf("\n");
//	}
//}
//本题要求实现一个判断素数的简单函数、以及利用该函数计算给定区间内素数和的函数。

//素数就是只能被1和自身整除的正整数。注意：1不是素数，2是素数。
//#include <stdio.h>
//#include <math.h>
//
//int prime(int p);//其中函数prime当用户传入参数p为素数时返回1，否则返回0；
//int PrimeSum(int m, int n);//函数PrimeSum返回区间[m, n]内所有素数的和
//
//int main()
//{
//	int m, n, p;
//
//	scanf("%d %d", &m, &n);
//	printf("Sum of ( ");
//	for (p = m; p <= n; p++) {
//		if (prime(p) != 0)
//			printf("%d ", p);
//	}
//	printf(") = %d\n", PrimeSum(m, n));
//
//	return 0;
//}
//int prime(int p)
//{
//	int ret = 1;
//	if (p == 1)
//		ret = 0;
//	else if (p <= 0)
//		return 0;
//	int i = 1;
//	for (i = 2; i < p; i++)
//	{
//		if (p%i == 0)
//			ret = 0;
//	}
//	return ret;
//}
//int PrimeSum(int m, int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = m; i <= n; i++)
//	{
//		if (prime(i) == 1)
//			sum += i;
//	}
//	return sum;
//}
//本题要求实现一个函数，用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e：
//
//cos(x) = x
//​0
//​​ / 0!−x
//​2
//​​ / 2!+ x
//​4
//​​ / 4!−x
//​6
//​​ / 6!+ ⋯
//#include <stdio.h>
//#include <math.h>
//
//double funcos(double e, double x);
//
//int main()
//{
//	double e, x;
//
//	scanf("%lf %lf", &e, &x);
//	printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
//
//	return 0;
//}
//double funcos(double e, double x)
//{
//	double answer = 0;
//	int flag = 1;
//	int  i = 0;
//	for (i = 0; ; i += 2)
//	{
//		int fun = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			fun *= j;
//		}
//		answer += (flag*(pow(x, i) / fun));
//		flag *= (-1);
//		if ((pow(x, i) / fun )< e)
//			break;
//	}
//	return answer;
//}
//本题要求实现一个函数，对给定平面任意两点坐标(x​1​​, y​1​​ )和(x​2​​, y​2​​)，求这两点之间的距离。
//#include <stdio.h>
//#include <math.h>
//
//double dist(double x1, double y1, double x2, double y2);
//
//int main()
//{
//	double x1, y1, x2, y2;
//
//	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
//	printf("dist = %.2f\n", dist(x1, y1, x2, y2));
//
//	return 0;
//}
//
//double dist(double x1, double y1, double x2, double y2)
//{
//
//   return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
//}
//水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 1​^3 + 5^​3​​ + 3^3
//​​ 。 本题要求编写两个函数，一个判断给定整数是否水仙花数，另一个按从小到大的顺序打印出给定区间(m, n)内所有的水仙花数。
//#include <stdio.h>
//#include<math.h>
//int narcissistic(int number);//函数narcissistic判断number是否为水仙花数，是则返回1，否则返回0。
//
//
//void PrintN(int m, int n);//函数PrintN则打印开区间(m, n)内所有的水仙花数，每个数字占一行。题目保证100≤m≤n≤10000。
//
//int main()
//{
//	int m, n;
//
//	scanf("%d %d", &m, &n);
//	if (narcissistic(m)) printf("%d is a narcissistic number\n", m);
//	PrintN(m, n);
//	if (narcissistic(n)) printf("%d is a narcissistic number\n", n);
//
//	return 0;
//}
//int narcissistic(int number)
//{
//	int ret = 0;
//	//计算位数
//	int count = 0;
//	int number1 = number;//123 12 1 
//	while (number1 > 0)
//	{
//		number1 /= 10;
//		count++;
//	}
//	//分割每一位
//	int sum = 0;
//	int count1 = count;
//	number1 = number;
//	while (count1--)
//	{
//		int a = number1 % 10;
//		sum += pow(a, count);
//		number1 /= 10;
//	}
//	//printf("%d\n", sum);
//	//计算比较
//	if (sum == number)
//		ret = 1;
//	return ret;
//}
//void PrintN(int m, int n)
//{
//	int i = 0;
//	for (i = m+1; i < n; i++)
//	{
//		if (narcissistic(i) == 1)
//			printf("%d\n", i);
//	}
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	/*malloc;
//	free;
//	calloc
//	*/
//	//申请空间
//	int *p= (int*)malloc(sizeof(int)*10);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//
//	//这是一套
//	/*int* p = (int*)malloc(sizeof(int));
//		if (p == NULL)
//		{
//			printf("开辟失败");
//		}
//		else
//		{
//			......
//		}
//		free(p);
//		p = NULL;*/
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	int* p =(int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);
//	p = NULL;
//}
//}
