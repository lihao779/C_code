////����Ҫ���д���򣬼��㽻������ 1 - 2 / 3 + 3 / 5 - 4 / 7 + 5 / 9 - 6 / 11 + ... ��ǰN��֮�͡�
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
//		//д��ÿһλ���ۼ�
//		double num = i*flag / (2 * i - 1);
//		sum += num;
//		flag = -flag;
//	}
//	printf("%.3lf\n", sum);
//}
//����������6��������A�����Ǵ�A��ʼ������4�����֡������������������ɵ����ظ����ֵ�3λ����
//������������ĵ�3λ����Ҫ���С����ÿ��6���������������Կո�ָ�������ĩ�����ж���ո�
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//����n-n+3������Ҫ������
//	int i = n;
//	int found = 0;
//	//��һλ����
//	for (i = n; i <= n + 3; i++)
//	{
//		//�ڶ�λ����
//		int k = n;
//		for (k = n;k<=n+3;k++)
//		{
//			//����λ����
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
//�ڶ���Ҳ��Ϊ���������ֳơ�Kaprekar���⡱����һ���������ת�����Ե�����
//
//�κ�һ����λ���ֲ�ȫ��ͬ����λ���������޴Ρ��������������ܻ�õ�495��������õ�495��Ϊ��λ�ڶ�������ν����������������ɸ������������ź���������ȥ���ź����С������6174Ϊ��λ�ڶ�������
//
//���磬����λ��207��
//
//��1���������ã�720 - 27 �� 693��
//��2���������ã�963 - 369 �� 594��
//��3���������ã�954 - 459 �� 495��
//�Ժ��ͣ����495��һ�ڶ����������λ����3������ȫ��ͬ��һ��ת����Ϊ0��
//
//��������һ����λ������̸����������Ĺ��̡�
//���ģ�����һ���������Ÿ������-��С��
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
//		//ÿ�αȽϴ���
//		int k = 0;
//		for (k = 0; k < count - 1 - i; k++)
//		{
//			if (arr[k] > arr[k + 1])//С����ǰ ����ں�
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
//		//ÿ�αȽϴ���
//		int k = 0;
//		for (k = 0; k < count - 1 - i; k++)
//		{
//			if (arr[k] < arr[k + 1])//�����ǰ С���ں�
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
//		//����ÿһλ��
//		int arr[100] = { 0 };
//		int i = 0;
//		int temp = n;
//		int count = 0;//���λ��
//		while (temp>0)
//		{
//			arr[i] = temp % 10;
//			count++;
//			temp /= 10;
//			i++;
//		}
//		//�жϴ�С����Ĵ����ں���С�Ĵ�����ǰ��
//		//ð������
//		test1(arr, count);
//		//���������ֵ
//		int ret1 = Max_Min(arr, count);
//		//printf("%d", ret1);
//		test2(arr, count);
//		//��С������
//		int ret2 = Max_Min(arr, count);
//		//printf("%d", ret2);
//			n = ret1 - ret2;
//		printf("%d: %d - %d = %d\n",mmo++,ret1, ret2, n);
//	}
//}
////����Ҫ����㲢���������n������k�������Լ����ǵĺ͡�
#include<stdio.h>
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int sum = 0;
	//����������
	while (k&&n >2)
	{
		//�ж�i�Ƿ�Ϊ����
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
//��ĳ���Ҫ����һ���ı��������Կո�ָ�Ϊ���ɸ����ʣ���.��������Ҫ���ÿ�����ʵĳ��ȡ�����ĵ����������޹أ�
//���԰������ַ��ţ�����it's��һ�����ʣ�����Ϊ4��ע�⣬���п��ܳ��������Ŀո�����.���������ڡ�
//#include<stdio.h>
//int main()
//{
//	char c;
//	int count = 0;
//	while ((c = getchar()) != '.')
//	{
//		//�Կո�ָ� ����ÿһλλ��
//		if (c != ' ')
//		{
//			count++;
//		}
//		//���ֿո�ʹ�ӡ��count������count��ԭΪ0��
//		else
//		{
//			printf("%d ", count);
//			count = 0;
//		}
//	}
//	//������.���Զ��˳���û�д�ӡ���һλ-��ӡ���һλ��û�к���ո�
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
//			//�Կո�ָ� ����ÿһλλ��
//				count++;
//				if (c = '.')
//					break;
//		}
//		printf("%d ", count);
//		count = 0;
//		while (c == ' ');
//		
//	}
//	//������.���Զ��˳���û�д�ӡ���һλ-��ӡ���һλ��û�к���ո�
//	printf("%d", count);
//}
//
