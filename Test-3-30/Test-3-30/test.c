////���0��100000֮������С�ˮ�ɻ������������
//
////��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//#include<stdio.h>
//int test(int num, int count)
//{
//	int sum = 1;
//	while (count--)
//	{
//		sum *= num;
//	}
//	return sum;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)//ȡ1-100000����
//	{
//		//�ж�λ��
//		int count = 1;
//		int temp = i;
//		while (temp>9)
//		{
//			temp /= 10;
//			count++;
//		}
//		temp = i;
//		int sum = 0;
//		//����ÿһλ����η�
//		while (temp > 0)
//		{
//			int a = temp % 10;
//			sum += test(a,count);
//			temp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//}
////��ӡ����
////    *//4
////   * *//3
////  * * *//2
//// * * * *//1
////* * * * *//0
//// * * * *//1
////  * * *//2
////   * *//3
////	  *//4
//#include<stdio.h>
//int main()
//{
//	int n = 13;
//	int row = n / 2 + 1;
//	//ǰ����
//	int j = 0;
//	for (j = 1; j <= row; j++)
//	{
//		//�ȴ�ӡ�ո�
//		int i = 0;
//		for (i = 0;i<row-j; i++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (i = 0; i < j; i++)
//		{
//			printf("* ");
//			
//		}
//		printf("\n");
//	}
//	//������
//	for (j = 1; j <= row - 1; j++)
//	{
//		//��ӡ�ո�
//		int i = 0;
//		for (i = 0; i < j; i++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (i = 0;i<row-j; i++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//
//}
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//
//int main()
//{
//	struct stu students[3] = { { 9801,"zhang",20 },
//	{ 9802,"wang",19 },
//	{ 9803,"zhao",18 }
//	};
//	fun(students + 1);
//	return 0;
//}
//   ģ��ʵ�ֿ⺯��strlen
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//	return count ;
//}
//int main()
//{
//	char arr1[] = "#######";
//	char arr2[] = "bit";
//	int ret = my_strlen(arr2);
//	printf("ret = %d\n", ret);
//	return 0;
//}
#include<stdio.h>
#include<assert.h>
char *my_strcpy(char* dest, const char* sor)
{
	assert(dest != NULL&&sor != NULL);
		char* dest1 = dest;
		const char* sor1 = sor;
		while (*dest1++=*sor1++)
		{
			;
		}
		return dest;
}
int main()
{
	char arr1[] = "#######";
	char arr2[] = "bit";
	printf("arr1 = %s\n", my_strcpy(arr1, arr2));
	return 0;
}