//#include <stdio.h>
//#define MAXN 10
//
//int ArrayShift(int a[], int n, int m);
//
//int main()
//{
//	int a[MAXN], n, m;
//	int i;
//
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++) scanf("%d", &a[i]);
//
//	ArrayShift(a, n, m);
//
//	for (i = 0; i < n; i++) {
//		if (i != 0) printf(" ");
//		printf("%d", a[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//int ArrayShift(int a[], int n, int m)
//{
//	//ѭ��m��
//	while (m--)
//	{
//		//ÿ��������һλ
//		int temp = a[n - 1];
//		int i = 0;
//		for (i = n - 1; i >= 1; i--)
//		{
//			a[i] = a[i - 1];
//		}
//		a[0] = temp;
//	}
//	return a;
//}
//#include <stdio.h>
//#include<string.h>
//#define MAXN 20
//
//void delchar(char *str, char c);
//
//int main()
//{
//	char str[MAXN] = "hello bit";
//		char c;
//	
//	scanf("%c\n", &c);
//	delchar(str, c);
//	printf("%s\n", str);
//
//	return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//void delchar(char *str, char c)
//{
//	//����һ����ŵ����飻���copy������
//	char str1[MAXN] = { 0 };
//	int len = strlen(str);
//	int len1 = 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (str[i] == c)
//			continue;
//		str1[len1] = str[i];
//		len1++;
//	}
//	for (i = 0; i < len1; i++)
//	{
//		str[i] = str1[i];
//	}
//	str[i] = '\0';
//}
//#include <stdio.h>
//#include <string.h>
//
//#define MAXS 10
//
//char *str_cat(char *s, char *t);
//
//int main()
//{
//	char *p;
//	char str1[MAXS + MAXS] = { '\0' }, str2[MAXS] = { '\0' };
//
//	scanf("%s%s", str1, str2);
//	p = str_cat(str1, str2);
//	printf("%s\n%s\n", p, str1);
//
//	return 0;
//}
//
///* ��Ĵ��뽫��Ƕ������ */
//char *str_cat(char *s, char *t)
//{
//	int len1 = strlen(s);
//	int len2 = strlen(t);
//	int i = 0;
//	while (len2--)
//	{
//		s[len1] = t[i];
//		len1++;
//		i++;
//	}
//	s[len1] = '\0';
//	return s;
//}
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//	char buf[1024];
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);//��ȡ�ļ����浽buf��
//	printf("%s", buf);
//	//puts(buf);
//	fgets(buf, 1024, pf);
//	puts(buf);
//	//printf("%s", buf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char buf[1024];
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\nworld", pf);
//	fputs("world\n", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	/*char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);
//	fputs(buf, stdout);*/
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);
//	//fputs(buf, stdout);
//	gets(buf);
//	puts(buf);
//}
//struct stu
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct stu s = {0};
//	FILE* pf= fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//...
//	/*fscanf(pf, "%d %f %s", &s.n, &s.score, s.arr);
//	printf("%s\n", s.arr);*/
//	fprintf(pf, "%d %f %s\n", s.n, s.score, s.arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}
//struct stu
//{
//	int n;
//	float score;
//	char arr[10];
//};
//int main()
//{
//	struct stu s = { 1,3.14,"bit" };
//	struct stu tmp = { 0 };
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s", buf);
//	//�Ѹ�ʽ�����ݴ洢��tmp�У� 
//	sscanf(buf, "%d %f %s", &tmp.n, &tmp.score, tmp.arr);
//	
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//}
//struct people
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct people s = { "����",12 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��������ʽд�ļ�
//	fwrite();
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}



//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int answer = 0;
//	scanf("%d", &n);
//	if (n >0)
//	{
//		answer = 1;
//	}
//	else if (n < 0)
//	{
//		answer = -1;
//	}
//	printf("sign(%d) = %d\n", n, answer);
//}
//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	double sum = 0.0;
//	double flag = 1.0;
//	int i = 1;
//	scanf("%d", &n);
//	while (n--)
//	{
//		sum += (flag * 1 / i);
//		i += 3;
//		flag = -flag;
//	}
//	printf("sum = %.3lf", sum);
//}
//#include<stdio.h>
//#include<malloc.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	double average = 0.0;
//	double max = 0.0;
//	double min = 0.0;
//	int* p=(int*)malloc(sizeof(int)*n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", (p + i));
//	}
//	/*for (i = 0; i < n; i++)
//	{
//		printf("%d ", *(p + i));
//	}*/
//	for (i = 0; i < n; i++)
//	{
//		sum += *(p + i);
//	}
//	average = sum*(1.0) / n;
//	if (n >= 1)
//	{
//		max = (*p)*1.0;
//		min = (*p)*1.0;//i 1  i 2
//		for (i = 1; i < n; i++)
//		{
//			if (max < *(p + i))
//			{
//				max = *(p + i);
//			}
//			if (min > *(p + i))
//			{
//				min = *(p + i);
//			}
//		}
//	}
//	printf("average = %.2lf\nmax = %.2lf\nmin = %.2lf", average, max, min);
//}
//#include<stdio.h>
//int main()
//{
//	int up = 0;
//	int down = 0;
//	scanf("%d/%d", &up, &down);
//	//printf("%d/%d\n", up, down);
//	//���飬����
//	if (up == down)
//	{
//		up = 1;
//		down = 1;
//		printf("%d/%d\n", up, down);
//	}
//	
//	else
//	{
//		//�����������Լ��
//		int i = up;
//		for (i; i >= 1; i--)
//		{
//			if ((up%i == 0) && (down%i == 0))
//			{
//				up /= i;
//				down /= i;
//				break;
//			}
//		}
//		printf("%d/%d\n", up, down);
//	}
//}
//#include<stdio.h>
//int main()
//{
//	char str[31] = { 0 };
//	int i = 0;
//	char ch = getchar();
//	while (ch != '#')
//	{
//		str[i] = ch;
//		ch = getchar();
//		i++;
//	}
//	//printf("%s", str);
//	int len = strlen(str);
//	//��Сдת��
//	for (i = 0; i < len; i++)
//	{
//		if (str[i] >= 'a'&&str[i] <= 'z')
//			str[i] -= 32;
//		else if (str[i] >= 'A'&&str[i] <= 'Z')
//			str[i] += 32;
//	}
//	printf("%s\n", str);
//}
#include<stdio.h>
//struct S 
//{
//	int n;
//	char str[10];
//};
//int main()
//{
//	struct S s = { 10,"bit" };
//	char buf[1024];
//	sprintf(buf, "%d%s", s.n, s.str);
//	printf("%s\n", buf);
//}
struct S
{
	char name[20];
	int age;
};
//int main()
//{
//	//struct S s = { "����",20 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//..
//	//fwrite(&s, sizeof(struct S), 1, pf);//������д���޷�ʶ��
//	fread(&tmp, sizeof(struct S), 1, pf);//�����ƶ��ļ�
//	printf(" %s %d", tmp.name, tmp.age);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//}
int main()
{
	FILE* pf = fopen("test", "w"); 
	if (pf == NULL)
	{
		return 0;
	}
	//��λָ���ļ�
	fseek(pf, -2, SEEK_END);//SEK_CUR��ǰλ��
	//���ļ�
	//SEEK_SET//��ʼλ��
	int ch = fgetc(pf);
	printf("%c\n", ch);
	fclose(pf);
	pf = NULL;
}