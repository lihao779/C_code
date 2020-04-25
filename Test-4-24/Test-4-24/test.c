#include<stdio.h>
#include<assert.h>
#include<string.h>
//char *my_strcat(char *dest,char *sor)
//{
//	assert(dest != NULL&&sor != NULL);
//	char *ret = dest;
//	//追加字符串
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *sor++)
//	{
//		;
//	}
//	
//	return ret;
//	
//}
//int main()
//{
//	//strcat
//	char str1[20] = "abc";
//	char str2[] = "def";
//	my_strcat(str1, str2);
//	printf("%s\n", str1);
//}
//strstr实现
//const char *my_strstr(const char*dest, const char*sor)
//{
//	assert(dest != NULL&&sor != NULL);
//	const char *fun = dest;
//	const char* sor1 = sor;
//	while (*fun)
//	{
//		dest = fun;
//		sor = sor1;
//		while (*dest == *sor)
//		{
//			dest++, sor++;
//			if (*sor == '\0')
//				return fun;
//		}
//		fun++;
//	}
//	return NULL;
//}
//int main()
//{
//	char *str1 = "abccdef";
//	char *str2 = "cd";
//	
//	const char * ret = my_strstr(str1, str2);
//	if (ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else
//		printf("字串存在\n");
//	printf("%s\n", ret);
//}
//char *my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL&&str2 != NULL);
//	//寻找字符串
//	char *ret = str1;
//	char * str = str2;
//	while (*ret)
//	{
//		str1 = ret;
//		str2 = str;
//		while ((*str1 == *str2) && (*str1) && (*str2))
//		{
//			str1++;
//			str2++;
//		}
//		if (!*str2)
//			return ret;
//		ret++;
//	}
//	return NULL;
//}
//
//int main()
//{
//		char *str1 = "abccdef";
//		char *str2 = "cd";
//		
//		const char * ret = my_strstr(str1, str2);
//		if (ret == NULL)
//		{
//			printf("字串不存在\n");
//		}
//		else
//			printf("字串存在\n");
//		printf("%s\n", ret);
//	return 0;
//}
//void* my_memcpy(void*dest, const void* sor,size_t count)
//{
//	assert(dest != NULL&&sor != NULL);
//	char* dest1 = (char*)dest;
//	char* sor1 = (char*)sor;
//	while (count--)
//	{
//		*dest1++ = *sor1++;
//	}
//	return dest;
//}
//int main()
//{
//	char str1[10] = "abcdef";
//	char* str2 = "def";
//	/*int arr1[10] = { 1,2,3,4,5,6,7,8 };
//	int arr2[10] = { 0 };*/
//	//my_memcpy(arr1, arr2, sizeof(int)*3);
//	//my_memcpy(str1+3, str1, 4);
//	memcpy(str1 + 3, str1, 4);
//	printf("%s\n", str1);
//	return 0;
//}
	//void *my_memmove(void* dest, const void* src, size_t count)
	//{
	//	assert(dest != NULL&&src != NULL);
	//	char* ret = (char*)dest;
	//	//如果dest在src与src+count之间为从后向前
	//	if (dest > src&&dest < (char*)src + count)
	//	{
	//		//从后向前
	//		while (count--)
	//		{
	//			*((char*)dest + count ) = *((char*)src + count);
	//		}
	//	}
	//	else
	//	{
	//		while (count--)
	//		{
	//			*(char*)dest = *(char*)src;
	//			((char*)dest)++;
	//			((char*)src)++;
	//		}
	//	}
	//	return ret;
	//}
	//int main()
	//{
	//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
	//	my_memmove(arr + 3, arr, 20);
	//
	//}
//struct stu
//{
//	char a : 4;
//	char b : 5;
//	char c : 3;
//	char d : 4;
//
//};
//int main()
//{
//	struct stu s;
//	printf("%d\n", sizeof(s));
//}
//enum sex
//{
//	min,
//	max
//
//};
//union un
//{
//	char a;
//	int b;
//};
//int main()
//{
//	enum sex s = min;
//
//	printf("%d  %d %d\n", sizeof(s), min, max);
//	union un c;
//	c.b = 1;
//	if (c.a == 1)
//		printf("小端");
//	else
//		printf("大端");
//}
//struct S 
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//enum R
//{
//	BULE,
//	YELLO,
//	RED
//};
//union K
//{
//	char a;
//	int b;
//};
//int main()
//{
//	struct S s ;
//	s.a = 10;
//	s.b = 20;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", s.a);
//	return 0;
//}
//#define MAX_SIZE A+B
//#define A 2
//#define B 3
//struct _Record_Struct
//{
//	unsigned char Env_Alarm_ID : 4;
//	unsigned char Para1 : 2;
//	unsigned char state;
//	unsigned char avail : 1;//3
//}*Env_Alarm_Record;
//int main()
//{
//	
//	printf("%d %d %d\n", sizeof(struct _Record_Struct), MAX_SIZE, sizeof(struct _Record_Struct) * MAX_SIZE);
//	struct _Record_Struct *pointer = (struct _Record_Struct*)malloc
//	(sizeof(struct _Record_Struct) * MAX_SIZE);//3*5
//}
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;//010
//	pstPimData->ucData0 = 3;//011    0 0 0 0 0 0 0 0
//	pstPimData->ucData1 = 4;//100    0 0 1 0 1 0 0 1
//	pstPimData->ucData2 = 5;//101      2    9
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}
//#include <stdio.h>
//union Un
//{
//	short s[7];//14
//	int n;//4
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	union
//	{
//		short k;//00000000 00000000
//		char i[2];//00000000 00000000
//	}*s, a; //39        38//小端存储 低地址放低位所以为3839
//	a.k = 0;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//	return 0;
//}
//enum ENUM_A
//{
//	X1,//0
//	Y1,//1
//	Z1 = 255,//255
//	A1,//256
//	B1,//257
//};
//int main()
//{
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);//1  267
//}
