//������A��������B ����С��������ָ 
//�ܱ�A��B��������С��������ֵ�����һ���㷨��������A��B����С ������
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	//��1��ʼ����
//	int i = 1;
//	while ((a*i) % b != 0)
//	{
//		i++;
//	}
//	printf("%d\n", a*i);
//	return 0;
////}
//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing.�����������Ϊ��beijing.like I ����������
//ÿ�������������1������������ I like beijing.�����������Ȳ�����100 ��������� �����������֮����ַ���, �Կո�ָ�
//#include<stdio.h>
//int main()
//{
//	char str[] = "i like bejing.";
//	char *left = str;
//	char *right = str - 1 + strlen(str);
//	//����
//	//��ת����
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//	//��ת����
//	left = str;
//	right = str;
//	char *mmo = str;
//	//�ҿ�ʼ�ͽ�β
//	while (right<mmo+strlen(str))
//	{
//		while (*right != ' '&&*right!='\0')
//		{
//			right++;
//		}
//		right -= 1;
//		char *mmp = right;
//		//��������
//		while (left < right)
//		{
//			char temp = *left;
//			*left = *right;
//			*right = temp;
//			left++;
//			right--;
//		}
//		left = mmp+2;
//		right = mmp+2;
//    }
//	printf("%s\n", str);
//}
//#include<stdio.h>
//test(int* arr)
//{
//	;
//}
//test2(int* arr2[10])
//{
//	;
//}
//void test(int arr[2][3])
//{
//	;
//}
//void test1(int arr[][3])
//{
//	;
//}
//void test2(int arr[2][3])
//{
//	;
//}
//void test3(int (*arr)[3])
//{}
//void test3(int (*arr)[3])
//{}
//int main()
//{
	//const char *p = "abcdef";
	/*char* ch[5];
	int* arr[7];
	int* arr1[10];
	int* p3;
	int* arr2[2];*/
	//int arr1[10];
	//int(*pa)[10] = &arr1;//����ָ��
	//int arr[10];
	//test(arr);//int�ĵ�ַ��int*
	//int* arr2[10];
	//test2(arr2);//int*�ĵ�ַ��int**
	//int arr[2][3];
	/*test(arr);
	test1(arr);
	test2(arr);*/
	//test3(arr);//��λ�����������ǵ�һ�еĵ�ַ
	//return 0;
//}
#include<stdio.h>
//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(int);
//	test(p, sz);
//}
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	p("abcdef");
//}
//typedef void(*pfun_t)(int);
//int main()
//{
//	//(*(void(*)())0)();//ָ��->��������������Ϊvoid����Ϊ������
//	//void(*  signal(int, void(*)(int))   )(int);
//	pfun_t signal(int, pfun_t);
//}
//int Add(int x,int y)
//{
//	return x + y;
//}
//int main()
//{
//	int(*p)(int ,int) = Add;
//	p(2, 4);
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	//int(*arr[4])(int,int)
//	//int(*parr)(int, int);
//	//int(*parr2[4])(int, int);
//	int(*arr1[2])(int, int) = { Add,Sub };
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d ", arr1[i](2, 4));//6 -2;
//	}
//}
//char* my_strcpy(char* dest, const char* sor)
//{}
////����ָ��
//char* (*ptr)(char* , const char* ) = my_strcpy;
//char* (*ptr1)(char*, const char*) = my_strcpy;
////����ָ�������
//char* (*Fun_arr[4])(char* , const char* ) = { my_strcpy,my_strcpy };



//������
//void meun()
//{
//	printf("***********************\n");
//	printf("** 1.Add     2.Sub   **\n");
//	printf("** 3.Mul     4.Div   **\n");
//	printf("******** 0.exit *******\n");
//	printf("***********************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x^y;
//}
////int main()
////{
////	int input = 0;
////	int x, y;
////	do 
////	{
////		meun();
////		printf("��ѡ��>");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("����������������:");
////			scnaf("%d %d", &x, &y);
////			printf("%d\n", Add(x, y));
////			break;
////		case 2:
////			printf("����������������:");
////			scnaf("%d %d", &x, &y);
////			printf("%d\n", Sub(x, y));
////			break;
////		case 3:
////			printf("����������������:");
////			scnaf("%d %d", &x, &y);
////			printf("%d\n", Mul(x, y));
////			break;
////		case 4:
////			printf("����������������:");
////			scnaf("%d %d", &x, &y);
////			printf("%d\n", Div(x, y));
////			break;
////		case 0:
////			printf("�˳�\n");
////			break;
////		default:
////			printf("ѡ�����\n");
////		}
////
////	}while(input);
////}
////int main()
////{
////	int input = 0;
////	int x, y;
////	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
////	do
////	{
////		meun();
////		printf("��ѡ��>");
////		scanf("%d", &input);
////		if (input >= 1 && input <= 5)
////		{
////			printf("����������������:");
////			scanf("%d %d", &x, &y);
////			int ret = pfArr[input](x, y);
////			printf("%d\n", ret);
////		}
////		else if (input == 0)
////		{
////			printf("�˳�����\n");
////		}
////		else
////		{
////			printf("�������\n");
////		}
////	} while (input);
////}
//void Calc(int(*pf)(int,int))
//{
//	int x, y;
//	printf("����������������:");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	int x, y;
//	do 
//	{
//		meun();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//		}
//
//	} while (input);
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10];
//	int(*ptr1)[10] = &arr;
//	int(*ptr2)(int, int) = Add;
//	int(*ptr3[10])(int, int);
//	int(*(*ptr4)[10])(int, int) = &ptr3;
//	int(*(*(*ptr5))[10])(int,int)= &ptr4;
//	int(*(*ptr6)[10])(int, int) = &ptr3;;
//	int a = 1;
//	int* pa = &a;
//	int(*pa)(int, int);
//}
//void print(char* str)
//{
//	printf("hehe:%s\n", str);
//}
//void test(void(*ptr)(char*))
//{
//	printf("test\n");
//	ptr("hello");
//}
//int main()
//{
//	test(print);
//	return 0;
//}