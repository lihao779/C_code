//#include<stdio.h>
//����һ���������飬ʵ��һ��������
//
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//
//����ż��λ������ĺ�벿�֡�
//void test(int arr[], int n)
//{
//	//left ��ǰ����ż�� right�Ӻ��������� 
//	//���ҵ��ͽ���
//	int right = n - 1;
//	int left = 0;
//	while (left < right)
//	{
//		//��ǰ������ż�����ҵ�������
//		for (; left < n; left++)
//		{
//			if (arr[left] % 2 == 0)
//			{
//				break;
//			}
//		}
//		//�Ӻ���ǰ���������ҵ�������
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
//		//��ǰ���ж�ż��
//		while (arr[left] % 2 == 0 && left < right)
//		{
//			left++;
//		}
//		//�Ӻ����ж�����
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
////���ڸ�����������N��������λ�������λ����֮�͡�
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//��λ��
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
////ˮ�ɻ�����ָһ��Nλ��������N��3��������ÿ��λ�ϵ����ֵ�N����֮�͵������������磺153=1^3+5^3+3^3 ����Ҫ���д����, ��������Nλˮ�ɻ�����
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//����n��ӡ��nλ������
//	int i = 1;
//	int p = n;
//	while (--p)
//	{
//		i *= 10;
//	}
//	//printf("%d", i);
//	//i = 153;
//	int j = i;
//	//����ÿһ��nλ����
//	for (; i < j * 10; i++)
//	{
//		int temp = i;
//		int sum = 0;
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		while (temp > 0)
//		{
//			int k = temp % 10; //�����ÿһλ
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
//��Ʊ�ĺ����� 6 λ���֣���һ�Ų�Ʊ��ǰ 3 λ�ϵ���֮�͵��ں� 3 λ�ϵ���֮�ͣ�������Ų�Ʊ�����˵ġ�����������жϸ����Ĳ�Ʊ�ǲ������˵ġ�
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