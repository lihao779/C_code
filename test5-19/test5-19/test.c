//#include<malloc.h>
//#include<stdio.h>
//int* MergeDate(int arr1[], int sz1, int arr2[], int sz2)
//{
//	int index = 0;
//	int index1 = 0;
//	int index2 = 0;
//	int* arr = malloc((sz1 + sz2) * sizeof(arr1[0]));
//	while (index1<sz1&&index2<sz2)
//	{
//		if (arr1[index1] >= arr2[index2])
//		{
//			arr[index++] = arr2[index2++];
//		}
//		else
//		{
//			arr[index++] = arr1[index1++];
//		}
//	}
//	while (index2 < sz2)
//	{
//		arr[index++] = arr2[index2++];
//	}
//	while (index1 < sz1)
//	{
//		arr[index++] = arr1[index1++];
//	}
//	return arr;
//}
//int main()
//{
//	int arr1[] = { 2,5,6,8 };
//	int arr2[] = { 1,3,5,7,8,9 };
//	int* array = MergeDate( arr1,sizeof(arr1) / sizeof(arr1[0]),arr2,sizeof(arr2) / sizeof(arr2[0]) );
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", array[i]);
//	}
//	printf("\n");
//	free(array);
//	array = NULL;
//	
//
//}
//#include<malloc.h>
//int* MergeDate(int arr1[], int sz1, int arr2[], int sz2)
//{
//	int index = 0;
//	int index1 = 0;
//	int index2 = 0;
//	int* arr = (int*)malloc((sz1 + sz2) * sizeof(arr1[0]));
//	while (index1<sz1&&index2<sz2)
//	{
//		if (arr1[index1] <= arr2[index2])
//		{
//			arr[index++] = arr1[index1++];
//		}
//		else
//		{
//			arr[index++] = arr2[index2++];
//		}
//	}
//	while (index1 < sz1)
//	{
//		arr[index++] = arr1[index1++];
//	}
//	while (index2 < sz2)
//	{
//		arr[index++] = arr2[index2++];
//	}
//	return arr;
//}
//int main()
//{
//	int arr1[] = { 1,2,5,6,8 };
//	int arr2[] = { 2,5,8,9 };
//	int* array = MergeDate(arr1, sizeof(arr1) / sizeof(arr1[0]), arr2, sizeof(arr2) / sizeof(arr2[0]));
//	
//	free(array);
//	array = NULL;
//}
//int main()
//{
//	Test();
//}
//#include<stdio.h>
//#include<malloc.h>
//typedef struct Friend
//{
//	char name[10];
//	int bir;
//	char tele[17];
//}Friend;
//int main()
//{
//	int n; 
//	scanf("%d", &n);
//	Friend* ps = (Friend*)malloc(sizeof(Friend)*n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d %s", (ps+i )->name, &(ps+i)->bir, (ps+i )->tele);
//	}
//	//按照年龄从大到小输出朋友的信息，格式同输出。
//	 i = 0;
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if ((ps + j)->bir > (ps + j + 1)->bir)
//			{
//				Friend tmp;
//				tmp = *(ps + j);
//				*(ps + j) = *(ps + j + 1);
//				*(ps + j + 1) = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s %d %s\n", (ps + i)->name, (ps + i)->bir, (ps + i)->tele);
//	}
//	return 0;
//}
//给定N个学生的基本信息，包括学号（由5个数字组成的字符串）、姓名（长度小于10的不包含空白字符的非空字符串）
//和成绩（[0,100]区间内的整数），要求计算他们的平均成绩，并顺序输出平均线以下的学生名单。
//#include<stdio.h>
//typedef struct People
//{
//	char id[6];
//	char name[10];
//	int score;
//}People;
//
//int main()
//{
//	People student[10];
//	int n ;
//	scanf("%d", &n);
//	int i = 0;
//	for ( i = 0; i < n; i++)
//	{
//		scanf("%s %s %d", student[i].id, student[i].name, &student[i].score);
//	}
//	//首先在一行中输出平均成绩，保留2位小数。然后按照输入顺序，每行输出一位平均线以下的学生的姓名和学号，间隔一个空格。
//	double ave = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += student[i].score;
//	}
//	ave = sum*1.0 / n;
//	printf("%.2lf\n", ave);
//	for (i = 0; i < n; i++)
//	{
//		if(student[i].score<ave)
//		printf("%s %s\n", student[i].id, student[i].name);
//	}
//}
#include<malloc.h>
int main()
{
	Test();
	
}
