
//1��ʹ�ö�������飨��������ռ临�Ӷ�O(1)��������
//1�������ƶ��󼴽������K�����ݿ������µ���ʱ����
//2�����ƶ�ԭ����
//3������ʱ��������ݿ�����ԭ������ײ�
//#include<stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int arr2[10] = {0};
//	int n = 3;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr2[i] = arr1[sz - 1 - i];
//	}
//	for (i = sz-n-1;i>=0;i--)
//	{
//		arr1[i + n] = arr1[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		arr1[i] = arr2[n - 1 - i];
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	return 0;
//}
//void reverse(int* nums, int start, int end)
//{
//	int temp;
//	while (start<end)
//	{
//		temp = nums[start];
//		nums[start] = nums[end];
//		nums[start] = temp;
//		end--;
//		start++;
//	}
//}
//
//void rotate(int* nums, int numsSize, int k)
//{
//	k %= numsSize;
//	//�ܷ�ת
//	reverse(nums, 0, numsSize - 1);
//	//ǰ��ת
//	reverse(nums, 0, k - 1);
//	//��ת
//	reverse(nums, k, numsSize - 1);
//}
//#include<string.h>
//#include<malloc.h>
//
//int* addToArrayForm(int* A, int ASize, int K, int* returnSize)
//{
//	int sz = ASize>5 ? ASize + 1 : 6;
//	int index = sz;
//	// int retIdx = sz-1;
//	int* arr = (int*)malloc(sz * sizeof(int));
//	int total = 0;
//	while (ASize>0)
//	{
//		K += A[ASize - 1];
//		arr[sz - 1] = K % 10;
//		K /= 10;
//		sz--;
//		ASize--;
//		total++;
//	}
//	while (K>0)
//	{
//		arr[sz - 1] = K % 10;
//		K /= 10;
//		sz--;
//		total++;
//	}
//	if (total<index)
//		memmove(arr, arr + (index - total), total * sizeof(int));
//	*returnSize = total;
//	return arr;
//}
//int main()
//{
//	/*int arr1[] = { 1,2,3,4,5,6,7 };
//	int k = 3;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	rotate(arr1, sz, k);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//*/
//	int A[] = { 1,2,0,0 };
//	int returnSize = 0;
//	int* pf= addToArrayForm(A, 4, 34, &returnSize);
//
//}
//

//#include"SList.h"
//
//
//int main()
//{
//	TestSList();
//	return 0;
//}


//#include<stdio.h>
//void Swap(int* left, int* right)
//{
//	int tmp = *left;
//	*left = *right;
//	*right = tmp;
//}
//void Swap(int** left, int** right)
//{
//	int* tmp = *left;
//	*left = *right;
//	*right = tmp;
//}

#if 0
void Swap(int** left, int** right)
{
	int tmp = **left;
	**left = **right;
	**right = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	int *pa = &a;
	int *pb = &b;
	Swap(&pa, &pb);
	printf("a = %d  b = %d\n",a,b);//�ײ�a��b����
	printf("*pa = %d  *pb = %d\n", *pa, *pb);

	return 0;
}
#endif


#include"SList.h"


int main()
{
	TestList1();
	
	return 0;
}