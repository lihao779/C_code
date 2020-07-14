#include"Sort.h"
//#include<math.h>
//int main()
//{
//
//	//Test();
//
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		int j = 2;
//		for (j = 2; j<i; j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%5d", i);
//			if (count != 0 && count % 8 == 0)
//				printf("\n");
//		}
//		
//	}
//	return 0;
//	
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include<malloc.h>
//#include<stdio.h>
//#include<assert.h>
//typedef struct student
//{
//	char name[10];
//	int age;
//	char tele[17];
//}student;
//
////插入排序
//void ageInsertSort(student* p, int size)
//{
//	for (int i = 1; i<size; i++)
//	{
//		student key = p[i];
//		int end = i - 1;
//		while (end >= 0 && key.age<p[end].age)
//		{
//			p[end + 1] = p[end];
//			end--;
//		}
//		if (end + 1 != i)
//		{
//			p[end + 1] = key;
//		}
//	}
//}
//void _ShellSort(student* p, int size)
//{
//	int gap = 3;
//	for (int i = gap; i<size; i++)
//	{
//		student key = p[i];
//		int end = i - gap;
//		while (end >= 0 && key.age<p[end].age)
//		{
//			p[end + gap] = p[end];
//			end -= gap;
//		}
//		if (end + gap != i)
//		{
//			p[end + gap] = key;
//		}
//		gap--;
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	student* p = (student*)malloc(sizeof(student)*n);
//	if (NULL == p)
//	{
//		assert(0);
//		return 0;
//	}
//	//输入学生信息
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%s", p[i].name);
//		scanf("%d", &p[i].age);
//		scanf("%s", p[i].tele);
//	}
//	//ageInsertSort(p,n);
//	_ShellSort(p, n);
//	for (int i = 0; i<n; i++)
//	{
//		printf("%s %d %s\n", p[i].name, p[i].age, p[i].tele);
//	}
//
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	Test();
	

	return 0;
}