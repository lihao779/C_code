#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stddef.h>
//void *my_memcpy(void *dest, void *sor, size_t count)
//{
//	assert(dest != NULL &&sor != NULL);
//	char* ret = dest;
//	while (count--)
//	{
//		*(char*)dest = *(char*)sor;
//		((char*)dest)++;
//		((char*)sor)++;
//}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//}
void *my_memmove(void *dest,void *sor,size_t count)
{
	assert(dest != NULL&&sor != NULL);
	void * ret = dest;
	if ((char*)dest > (char*)sor && (char*)dest < (char*)sor + count)
	{
		//从后向前拷贝
		while (count--)
		{
			*((char*)dest + count) = *((char*)sor + count);
		}
	}
	else
	{
		//从前向后拷贝
		while (count--)
		{
			*(char*)dest = *(char*)sor;
			((char*)dest)++;
			((char*)sor)++;
		}
	}
	return ret;
}
//int main()
//{
//	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//memmove(arr3+ 3, arr3, 20);
//	//my_memcpy(arr3 + 3, arr3, 20);
//	my_memmove(arr3 + 2, arr3, 20);
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,1 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//
//	return 0;
//}
//int main()
//{
//	char arr[10] = "0";
//	memset(arr, '#', 10);
//}
//struct  {
//	char name[20];
//	char tele[12];
//	int age;
//}s2,*s3;
//int main()
//{
//	struct s1;
//	//struct Stu s4;
//	s3 = &s2;
//}
//struct stu  
//{
//	int date;
//	struct stu *next;
//}s1;
////设置默认对齐数为四
//#pragma pack(4)
//struct s1
//{
//	double d;
//	char b;
//	int a;
//}s2;
//
////取消默认对齐数
//#pragma()
//int main()
//{
//	printf("%d\n", sizeof(s2));
//}
struct stu 
{
	char c;
	int a;
	double i;
};
int main()
{
	//offsetof();
	printf("%d", offsetof(struct stu, c));
	printf("%d", offsetof(struct stu, a));
	printf("%d", offsetof(struct stu, i));
	return 0;
}