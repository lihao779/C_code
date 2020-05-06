//#include <stdio.h>
//
//#define MAXN 10
////其中函数even将根据用户传入的参数n的奇偶性返回相应值：当n为偶数时返回1，否则返回0。
//int even(int n); 
////函数OddSum负责计算并返回传入的N个整数List[]中所有奇数的和。
//int OddSum(int List[], int N);
//
//int main()
//{
//	int List[MAXN], N, i;
//
//	scanf("%d", &N);
//	printf("Sum of ( ");
//	for (i = 0; i<N; i++) {
//		scanf("%d", &List[i]);
//		if (even(List[i]) == 0)
//			printf("%d ", List[i]);
//	}
//	printf(") = %d\n", OddSum(List, N));
//
//	return 0;
//}
//int even(int n)
//{
//	if (n % 2 == 0)
//		return 1;
//	return 0;
//}
//int OddSum(int List[], int N)
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < N; i++)
//	{
//		if (even(List[i]) == 0)
//			sum += List[i];
//	}
//	return sum;
//}
//#include <stdio.h>
//
//void sum_diff(float op1, float op2, float *psum, float *pdiff);
//
//int main()
//{
//	float a, b, sum, diff;
//
//	scanf("%f %f", &a, &b);
//	sum_diff(a, b, &sum, &diff);
//	printf("The sum is %.2f\nThe diff is %.2f\n", sum, diff);
//
//	return 0;
//}
//
//void sum_diff(float op1, float op2, float *psum, float *pdiff)
//{
//	*psum = op1 + op2;
//	*pdiff = op1 - op2;
//}
//#include <stdio.h>
//
//void findmax(int *px, int *py, int *pmax);
//
//int main()
//{
//	int max, x, y;
//
//	scanf("%d %d", &x, &y);
//	findmax(&x, &y, &max);
//	printf("%d\n", max);
//
//	return 0;
//}
//
//void findmax(int *px, int *py, int *pmax)
//{
//	if (*px > *py)
//		*pmax = *px;
//	else
//		*pmax = *py;
//}
//#include <stdio.h>
//#define MAXN 20
//
//void strmcpy(char *t, int m, char *s);
//
//int main()
//{
//	char t[MAXN] = "hello bit", s[MAXN];
//	int m;
//
//	scanf("%d\n", &m);
//	strmcpy(t, m, s);
//	printf("%s\n", s);
//
//	return 0;
//}
//
//void strmcpy(char *t, int m, char *s)
//{
//	int i = 0;
//	while (*(t+m-1) != '\0')
//	{
//		*(s + i) = *(t + m - 1);
//		i++;
//		m++;
//	}
//	*(s + i) = '\0';
//}
//#include <stdio.h>
//#define MAXN 10
//
//void f(long int x, char *p);
//
//int main()
//{
//	long int x;
//	char s[MAXN] = "";
//
//	scanf("%ld", &x);
//	f(x, s);
//	printf("%s\n", s);
//
//	return 0;
//}
//
//void f(long int x, char *p)
//{
//	int m;
//	int n;
//	int i = 0;
//	if (x < 0)
//	{
//		*p = '-';
//		p++;
//		x = -x;
//	}
//	
//	for (i = 0; i < MAXN; i++)
//	{
//		m = x % 16;
//		x /= 16;
//		if (m < 10)
//			*(p +MAXN- i-1) = m + '0';
//		else if (m >= 10)
//			*(p +MAXN- i-1) = m - 10 + 'A';
//		if (x == 0)
//		{
//			n = MAXN - i - 1;
//			break;
//		}
//	}
//	for (i = 0;i<MAXN-n; i++)
//	{
//		*(p + i) = *(p + n+i);
//		*(p + n + i) = 0;
//	}
//}
#include<malloc.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>
//int main()
//{
//	/* 6种常见的错误
//	//1.对NULL指针解引用操作
//	//int* p = (int*)malloc(40);
//	////*p = 10;//malloc开启空间失败-对NULL解引用；
//	//2.对动态开辟内存的越界访问
//	//int* p = (int *)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)//访问了11次-越界访问
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//	////3.对非动态内存的free释放
//	//int a = 10;
//	//int* p = &a;
//	////...
//	//free(p);
//	//p = NULL;
//	////4.使用free释放动态内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//	return 0;
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////回收空间
//	//free(p);//free必须从起始位置释放
//	//p = NULL;
//	////5.对同一块动态内存多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//	return 0;
//	////使用...
//	//free(p);
//	////...
//	//free(p);//多次释放
//	////防止办法
//	//free(p);
//	//p = NULL;
//	////...
//	//free(p);//释放NULL指针相当于不释放；
//	//6.对动态开辟的空间忘记释放（内存泄漏）
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//	*/
//
//}
//int main()
//{
//	/*char* str = "abcdef";
//	printf("%s\n", str);
//	printf(str);
//	printf("abcdef\n");*/
//}
//void Getmemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test()
//{
//	char* str = NULL;
//	Getmemory(&str);
//	if(str!=NULL)
//	{
//		strcpy(str, "hellobit");
//		printf(str);
//	}
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//}
//char* Getmemory(void )
//{
//	char* p = "hello";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = Getmemory();
//	if(str!=NULL)
//	{
//		strcpy(str, "hellobit");
//		printf(str);
//	}
//	
//}
//int main()
//{
//	Test();
//}
//柔性数组
//struct S
//{
//	int n;
//	int arr[0];//未知大小的-柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	/*struct S s;
//	printf("%d\n", sizeof(s));*/
//	struct S* s = (struct S*)malloc(sizeof(struct S) + sizeof(int) * 5);
//	s->n = 1000;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		s->arr[i] = i;
//	}
//	struct S* ptr = realloc(s, 44);
//	if (ptr != NULL)
//	{
//		s = ptr;
//	}
//
//	for (i = 5; i < 10; i++)
//	{
//		s->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s->arr[i]);
//	}
//	free(s);
//	s = NULL;
//	return 0;
//}
//struct S 
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S s;
//	s.arr = (int*)malloc(40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(s.arr + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",s.arr[i]) ;
//	}
//	free(s.arr);
//	s.arr = NULL;
//
//}