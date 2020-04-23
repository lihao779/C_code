//模拟实现strcmp
//int strcmp( const char *string1, const char *string2 );
#include<string.h>
#include<stdio.h>
#include<assert.h>
//int my_strcmp(const char *str1,const char *str2)
//{
//	//判断字符串大小;
//	assert(str1 != NULL&&str2 != NULL);
//	while (*str1!='\0'||*str2!='\0')
//	{
//		if (*str1 == *str2)
//		{
//			str1++;
//			str2++;
//		}
//		else
//		break;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else if (*str1 < *str2)
//		return -1;
//	else
//		return 0;
//}
//int my_strcmp(const char * src, const char * dst)
//{
//	int ret = 0;
//	
//	while (!(ret = *(unsigned char *)src - *(unsigned char *)dst) && *dst)
//		++src, ++dst;
//		if (ret < 0)
//			ret = -1;
//		else if (ret > 0)
//			ret = 1;
//		return(ret);
//}
//int my_strcmp(const char * src, const char * dest)
//{
//	int ret = 0;
//	assert(src != NULL&&dest != NULL);
//	while (!(ret = *src - *dest)&&*src)
//		src++, dest++;
//	if (ret > 0)
//		return 1;
//	else if (ret < 0)
//		return -1;
//	else
//		return 0;
//}
//int main()
//{
//	char *str1 = "abcdef";
//	char *str2 = "defabc";
//	int ret = my_strcmp(str1, str2);
//	printf("%d\n", ret);
//
//	return 0;
//}
//char *my_strcat(char *dest, const char*sor)
//{
//	assert(dest != NULL&&sor != NULL);
//	char* dest1 = dest;
//	const char* sor1 = sor;
//	int ret = strlen(dest1);
//	while (*sor1!='\0')
//	{
//		*(dest1 + ret) = *sor1;//
//		sor1++;
//		dest1++;
//	}
//	*dest1 = '\0';
//	return dest;
//}
char *my_strcat(char *dest, const char*sor)
{
	assert(dest != NULL&&sor != NULL);
	char* dest1 = dest;
	while (*dest)
		dest++;
	while (*dest++=*sor++);
	
	return dest1;
}
int main()
{
	char str1[20] = "abcda";
	char *str2 = "def";
	my_strcat(str1, str2);
	printf("%s\n", str1);
}