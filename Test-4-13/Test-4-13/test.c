//本题要求编写程序，将一个给定的整数插到原本有序的整数序列中，使结果序列仍然有序。
//输入格式
//5
//1 2 4 5 7
//3
//输出格式
//1 2 3 4 5 7
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ",&arr[i]);
//	}
//}
//本题要求编写程序，求一个给定的m×n矩阵各行元素之和。
//#include<stdio.h>
//int main()
//{
//	int arr[6][6];
//	int m, n;
//	scanf("%d %d", &n, &m);//m行n列
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//int b = 0;
//	for (i = 0; i < n; i++)
//	{
//		int b = 0;
//		int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			b += arr[i][j];
//		}
//		printf("%d\n", b);
//		//b = 0;
//	}
//     return 0;
//}
//#include <stdio.h>
//
//int main() {
//	int n = 0, m = 0, i = 0, j = 0, b = 0;
//	scanf("%d %d", &n, &m);
//	int a[6][6];
//
//	for (i = 0; i<n; i++)
//
//	{
//		for (j = 0; j<m; j++)
//
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//
//	for (i = 0; i<n; i++)
//
//	{
//		for (j = 0; j<m; j++)
//
//		{
//			b = b + a[i][j];
//		}
//		printf("%d\n", b);
//		b = 0;
//	}
//	return 0;
//}
//上三角矩阵指主对角线以下的元素都为0的矩阵；主对角线为从矩阵的左上角至右下角的连线。
//本题要求编写程序，判断一个给定的方阵是否上三角矩阵
//2
//3
//1 2 3
//0 4 5
//0 0 6
//2
//1 0
//- 8 2
//#include<stdio.h>
//int main()
//{
//
//	int t;
//	scanf("%d", &t);
//	int arr[10][10];
//	int k = 0;
//	int p[100];
//	for (k = 0; k < t; k++)
//	{
//		//读入
//		int m;
//		scanf("%d", &m);
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				scanf("%d", &arr[i][j]);
//			}
//		}
//		//判断
//		int count = 0;
//		for (int i = 0; i < m; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (i > j&&arr[i][j] != 0)
//				{
//					count++;
//				}
//			}
//		}
//		if (count == 0)
//		{
//			p[k] = 0;
//		}
//		else
//			p[k] = 1;
//	}
//	//输出yes或者no
//	int j = 0;
//	for (j = 0; j < t; j++)
//	{
//		if (p[j] == 0)
//		{
//			printf("YES\n");
//		}
//		else
//			printf("NO\n");
//	}
//}
//#include<stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d", b);
//}
//打印杨辉三角
//#include<stdio.h>
//int main()
//{
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			//给数字
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//#include<stdio.h>
//int main()
//{
//	char killer = 'a';
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("killer =%c\n", killer);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a*b*c*d*e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//}
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	//申请
//	int* p = (int*)malloc(sizeof(int) * 10);
//	//使用
//	//........
//	//释放
//	free(p);
//	p = NULL;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[2][3] = { 1,2,3,4,5,6 };
//	int* ptr1 = (int*)(&arr + 1);
//	int* ptr2 = (int*)(*(arr + 1));
//	printf("%d %d", *(ptr1-1), *(ptr2-1));
//}

//现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//答题
//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	char temp = '0';
//	while (k--)
//	{
//		temp = *arr;
//		//交换
//		int i = 0;
//		for (i = 0; i <= strlen(arr)-2; i++)
//		{
//			*(arr + i) = *(arr + i + 1);
//		}
//		*(arr + strlen(arr) - 1) = temp;
//	}
//	
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//void reverse(char* left,char* right)
//{
//	assert(left != NULL&&right != NULL);
//		while (left < right)
//		{
//			char tmp = *left;
//			*left = *right;
//			*right = tmp;
//			left++;
//			right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);		
//	int len = strlen(arr);
//	assert(k <= len);
//	//三步翻转法
//	reverse(arr, arr + k - 1);//翻转左边
//	reverse(arr + k, arr+len-1);//反转右边
//	reverse(arr, arr + len - 1);//全部翻转
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 6);
//	printf("%s\n", arr);
//	return 0;
//}
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//void reverse(char* left,char* right)
//{
//	assert(left != NULL&&right != NULL);
//		while (left < right)
//		{
//			char tmp = *left;
//			*left = *right;
//			*right = tmp;
//			left++;
//			right--;
//	}
//}
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);		
//	int len = strlen(arr);
//	assert(k <= len);
//	//三步翻转法
//	reverse(arr, arr + k - 1);//翻转左边
//	reverse(arr + k, arr+len-1);//反转右边
//	reverse(arr, arr + len - 1);//全部翻转
//}
//int is_left_move(char* s1, char* s2)
//{
//	assert(s1 != NULL&&s2 != NULL);
//	int i = 0;
//	int len = strlen(s1);
//	for (i = 0; i <len ; i++)
//	{
//		left_move(s1, 1);
//		if (strcmp(s1, s2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = "abcdef";
//	char* s2 = "cdefab";
//	int ret = is_left_move(s1, s2);
//	if (ret == 1)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 6);
//	printf("%s\n", arr);
//	return 0;
//}

//qsort使用练习 快速排序
//void qsort(void *base, size_t num, size_t width, 
//	int(__cdecl *compare)(const void *elem1, const void *elem2));
//#include<stdio.h>
//#include<stdlib.h>
//void Bubble_arr(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//			printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
////void qsort(void *base, size_t num, size_t width, 
////	int(__cdecl *compare)(const void *elem1, const void *elem2));//函数指针
//int cmp_int (const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr)/sizeof(int);
//	//Bubble_arr(arr, sz);
//	Print(arr, sz);
//	qsort(arr, sz, sizeof(int), cmp_int);
//	Print(arr, sz);
//}

//#include<stdio.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 10 ,9 ,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(int);
//	print(arr, sz);
//	qsort(arr, sz, sizeof(int), cmp_int);
//	print(arr, sz);
//	return 0;
//}
