#include<iostream>
using namespace std;
//#include<stdio.h>
#if 0
namespace N
{
	int a = 10;
	int Add(int left, int right)
	{
		return left + right;
	}
}

//using namespace N;
int main()
{
	//cout << "a = "<<N::a << endl;
	//cout << "a = " << N::a;
	//cout << "a = " << a<<endl;
	/*int a = 1;
	int b = 2;
	cout << a + b << endl;
	cout<< N::Add(a, b)*/
	/*int a = 1;
	int b = 2;
	cout << Add(a, b) << endl;
	int b = 1;
	cout << "a = " << a << endl;
	cout<< "a+b = " << Add(a, b);

	int a;
	double b;
	char c;

	cin >> a >> b >> c;
	cout << a << " " << b << " " << c << endl;*/

	return 0;
}
#endif
#if 0
void test(int a, int b = 3, int c = 2);
void test(int a  ,int b ,int c  )
{
	cout << "a = " <<a<< endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}


int main()
{
	test(1);
	return 0;
}
#endif
#if 0
int Add(int a, int b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}




int main()
{
	Add(1, 2);
	Add(1.0, 2.0);
	Add('1', '2');
	return 0;
}
#endif

#if 0
int Add(int left, double right)
{
	return left + right;
}

double Add(double left,int right )
{
	return left + right;
}

int main()
{
	double c= Add(2.2, 1);
	return 0;
}
#endif

#if 0
void test(int a, int b = 1, int c = 2)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
int main()
{
	test(1);	
	test(1, 2);
	test(1, 2, 3);
	return 0;
}
#endif
#if 0 
int Add(int a, int b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}
int main()
{
	//Add("hehe", "haha");//û����ʽ����ת��

}
#endif
#if 0 
int Add(int left, int right);

int main()
{
	Add(1, 2);
}
#endif
/*
Ԥ�����������룬Դ�ļ����������滻���п��ƣ��״���ע����ָ��
���룺�﷨�������ʷ�������������ܣ����Ż���-->���ɻ�����
��ࣺ�γɷ��ű����ָ��--->������ָ��
���ӣ����ļ����õ��ĺ�������̬�⣬��̬�⣬���-->��ִ���ļ�
*/

#if 0
#include<iostream>
using namespace std;

int Add(int left, int right)
{
	return left + right;
}
int main()
{
	/*std::cout << "Enter two numbers\n" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	std::cout << "The Mul of " << v1 << " and " << v2 << " is " << v1*v2 << std::endl;
*/
	char c = Add('1', '2');
	return 0;
}
#endif



#if 0

#include<iostream>
using namespace std;



int main()
{
	double a = 12.3;
	const double& ra = a;
	a = 10.0;
	return 0;
}
#endif


//void test(int a = 1)
//{
//	cout << "test(int a = 1)" << endl;
//}
//
//void test()
//{
//	cout << "test()" << endl;
//}


//void TestRef()
//{
//	/*int a = 1;
//	int& ra = a;
//	cout << &a << " "<<&ra << endl;*/
//	int a = 2;
//	int& ra = a;
//	int& rb = a;
//	int& rc = a;
//	
//	cout << &a << " " << &ra << " " << &rb << " " << &rc << endl;
//}
//void TestConstRef()
//{
//	const int a = 10;
//	//int& ra = a;//aΪconst���Σ��޷��ı�
//	const int& ra = a;
//	//int& b = 10; //10Ϊ�����޷���int&���ã�
//	const int& rb = 10;
//	double c = 10.78;
//	//int& rc = c;//��������ʱ��������Ͳ�ͬ
//	const int& rc = c;
//}
//
//int main()
//{
//	//TestRef();
//
//	return 0;
//}
//ʹ�ó���
////1.������
//void Swap(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//void Swap(int* left, int* right)
//{
//	int tmp = *left;
//	*left = *right;
//	*right = tmp;
//}
////2.������ֵ
//int& Add(int left, int right)
//{
//	int c = left + right;
//	return c;
//}
//
//int main()
//{
//	/*int a = 1;
//	int b = 10;
//	Swap(a, b);
//	cout << "a = " << a << " " << "b = " << b << endl;
//	Swap(&a, &b);
//	cout << "a = " << a << " " << "b = " << b << endl;*/
//
//	//int ra = Add(1, 2);
//	//Add(3,4);
//	//int a = 1;
//	//int& ra = a;
//	//int& rb = ra;
//	//int b = ra;
//	//cout << &a << " " << &ra << " " << &rb <<" "<<&b<< endl;
//
//
//	return 0;
//}

//int& Count()
//{
//	static int n = 0;
//	n++;
//	return n;
//}
//int main()
//{
//	int& ra = Count();
//	Count();
//	return 0;
//}

//int& Add(int left, int right)
//{
//	int c = left + right;
//	return c;
//}
//#include<time.h>
//struct A
//{
//	int array[1000];
//};
//void test1(A a){}
//void test2(A& a){}
//
//int main()
//{
//	A a = { 0 };
//	int begin1 = clock();
//	for (int i = 0; i < 1000; i++)
//		test1(a);
//	int end1 = clock();
//	cout << end1 - begin1 << endl;
//	int begin2 = clock();
//	for (int i = 0; i < 1000; i++)
//		test2(a);
//	int end2 = clock();
//	cout << end2 - begin2 << endl;
//
//		return 0;
//
//}

//void test(int a)
//{
//
//}
//void test(int& a)
//{
//
//}
//int main()
//{
//	int a = 10;
//	test(a);
//}
//int face(int val)
//{
//	int ret = 1;
//	while (val > 1)
//		ret *= val--;
//	return ret;
//}
//
//int _val(int a)
//{
//	return a > 0 ? a : -a;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	//int j = face(n);
//	int j = _val(n);
//	return 0;
//}
//int Count()
//{
//	static int i = 0;
//	return i++;
//}
//void Swap(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//int main()
//{
//
//	int i = 1;
//	int* const p = &i;
//	for (int i = 0; i != 10; i++)
//		cout << Count() << endl;
//	return 0;
//}
//#ifdef __cplusplus
//extern "C"
//{
//#endif
//  int Add(int left, int right);
//#ifdef __cplusplus
//
//}
//#endif
#if 0
#ifdef __cplusplus
extern "C"
{
#endif
	int Add(int left, int right);
#ifdef __cplusplus
}
#endif
int main()
{
	Add(1, 2);
	return 0;
}
#endif 
#if 0
void PtrRef(int** p)
{
	*p = NULL;
}
void PtrRef(int*& p)
{
	p = NULL;
}
void PtrRef(int* p)
{
	p = NULL;
}
int main()
{
	int a;
	int* p = &a;
	//PtrRef(p);
	return 0;
}
#endif
/*
��ֵ����ַ
1.��ֵ���β���ʵ�ε�һ����ʱ�������βθı䣬ʵ�β����ܵ�Ӱ��
2.��ַ���β��������ʵ�εĵ�ַ������ͨ�������õķ�ʽ�޸�ʵ��
3.��ַ�ȴ�ֵ��Ч����ֵ��Ҫ���������ʵ�����ͽϴ�ռ�ÿռ�϶�
4.��ֵ�ȴ�ַ��ȫ����ֵ�����޸��ⲿʵ��
5.��ֵ�ȴ�ַ����ɶ��Ը�
��ȱ��
��ֵ��
�ŵ㣺1.����ɶ��Ը� 2.��ȫ
ȱ�㣺1.Ч�ʵ� 2.���ܸı��ⲿʵ��
��ַ
�ŵ㣺1.�����޸��ⲿʵ�� 2.Ч�ʸ�
ȱ�㣺1.��������޸��ⲿʵ�Σ���ַ����ȫ 2.����ɶ��Ե�
*/
//bool FindArr(int* arr, int len ,int width, int num)
//{
//	if (NULL == arr)
//		return false;
//	int i = len;
//	int j = width;
//	int 
//}
//int main()
//{
//	
//	return 0;
//}
#if 0
int& Add(int a, int b)
{
	int c = a + b;
	return c;
}
void test(){}

int main()
{
	int& a = Add(1, 2);
	Add(2, 2);
	test();
	return 0;
}
#endif
#if 0 
int main()
{
	int a = 1;
	int& ra = a;
	int&& rra = a;
	return 0;
}
#endif
//int G_a;
//int& Add(int left, int right,int& r)
//{
//	r = left + right;
//	return r;
//}
//
//
//int main()
//{
//	int r = 0;
//	int& sum = Add(1, 2,r);
//	Add(3, 4,r);
//	Add(5, 6,r);
//	return 0;
//}
//int& Add(int left, int right )
//{
//	int ret = left + right;
//	return ret;
//}
//
//
//int main()
//{
//
//	int& sum = Add(1, 2);
//	Add(3, 4);
//	Add(5, 6);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//
//	int& ra = a;
//	ra = 10;
//
//	int* pa = &a;
//	*pa = 10;
//
//	
//}
//void Swap(int& left, int& right)
//{
//	int tmp = left;
//	left = right;
//	right = tmp;
//}
//void Swap(int* left, int* right)
//{
//	int tmp = *left;
//	*left = *right;
//	*right = tmp;
//}
//
//int main()
//{
//	int a = 1;
//	int b = 10;
//
//	Swap(&a, &b);
//
//	Swap(a, b);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int& ra = a;
//	//int&& rra = a;//û�ж༶����
//	
//	//��ֵ���� ---->C++
//	//int&& rra = 0;
//	return 0;
//}
//int Add(int left, int right)
//{
//	int z = 0;
//	z = left + right;
//	return z;
//}
//int  main()
//{
//	int ret = Add(1, 2);
//	return 0;
//}
#if 0
void _cdecl fun()
{
	int tmp = 10;
	int* ptr = (int*)(*(&tmp+1));
	*(ptr - 1) = 20;
}
int main()
{
	const int b = 10;
	int array[b] ;
	int a = 0;
	fun();
	return 0;
}
#endif
#if 0
int main()
{
	auto a = 10;

	auto pa = &a;
	auto *pb = &a;
	cout << typeid(pa).name() << endl;
	cout << typeid(pb).name ()<< endl;
	
	auto& ra = a;
	auto rra = a;
	cout << &a << " " << &ra << " " << &rra << endl;
	return 0;
}
#endif
#if 0
void TestAutoParam(auto a)
{
	a++;
}
int main()
{
	int a = 1;
	TestAutoParam(a);
	return 0;
}
#endif 
#if 0
int main()
{
	int array[] = { 1,2,3,4,5,6,7,8,9,0 };
	for (auto e : array)
		cout << e << " ";
	cout << endl;
	for (auto& e : array)
		cout << e << " ";
	cout << endl;
	return 0;
}
#endif
//inline int Add(int left, int right);
//inline int Add(int left, int right)
//{
//	int z = right + left;
//	return z;
//}
// int Add(int left, int right)
//{
//	int z = right + left;
//	return z;
//}
//int TestAuto(auto a)//auto������Ϊ�βΣ���Ϊ�������ܵ���д�������ã��β�δ��ֵ���޷��Ƶ�Ԫ������
//{
//	return 10;
//}
//int TestAuto(auto a = 1)//������ȱʡ������ֵ�����ǲ������к����Ĳ�������ȱʡ���������Բ��У�
//{
//	return 10;
//}
//void Fun(int array[])//�����Ѿ��˻�Ϊָ��
//{
//	for (auto a : array)//ѭ��������Χ����ȷ
//		cout << a << " ";
//}
//void TestPtr()
//{
//	int* p1 = NULL;
//	int* p2 = 0 ;
//	//int array[10];
//}
//void f(int)
//{
//	cout << "f(int)" << endl;
//}
//void f(int*)
//{
//	cout << "f(int*)" << endl;
//}
#if 0 
int main()
{
	//int a = 10;
	//auto b = 10;
	//auto c = '10';
	//auto d = "abc";
	//auto e = TestAuto();
	//cout << typeid(b).name() << endl;
	//cout << typeid(c).name() << endl;
	//cout << typeid(d).name() << endl;
	//cout << typeid(e).name() << endl;
	//int a = 1;
	//auto pa = &a;
	//auto *pb = &a;
	//cout << typeid(pa).name() << endl;
	//cout << typeid(pb).name() << endl;
	//auto& ra = a;
	//auto rra = a;//���ñ�����auto�����&����
	//cout << &a << " " << &ra << ' ' << &rra << endl;
	//sizeof(auto);//auto��������
	//int array0[10];
	//int array1[] = { 1,2,3 };
	//int array[10] = { 1,2,3 };
	//auto array[] = { 1,2,3 };//�޷�ȷ�������ж��ٸ�Ԫ�أ�3����10����100����������
	//auto a = 1, b = 2;
	//auto c = 1.0, d = 2;//��auto��������Ԫ�أ���Щ������������ͬ���ͣ���Ϊ������ֻ��Ե�һ�������Ƶ���Ȼ�������Ƶ����������Ͷ�������Ԫ��
	//int array[] = { 1,2,3,4,5,6,7,8,9 };
	//for (auto a : array)//a��һ�ݿ���
	//	cout << a << ' ';
	//	cout << endl;
	//	for (auto& a : array)//a������Ԫ�صı���-->������Ϊ��������Ԫ�ر���
	//	{
	//		a *= 2;
	//		cout << a << " ";
	//	}
	//	cout << endl;
	//TestPtr();
	/*f(0);
	f(NULL);
	f((int*)NULL);*/
	/*cout << sizeof((void*)0) << endl;
	cout << sizeof(NULL) << endl;*/
	//printf("%d", sizeof(NULL));
	//const int& ra = NULL;
	//const int a = 10;
	//int array[a];
	
	return 0;
}
#endif 
inline int Add(int left, int right)
{
	int z = left + right;
	return z;
}
int main()
{
	//int a = 1;
	//int b = 2;
	//int z = Add(a, b);
	auto a = 10;//autoֻ��һ��ռλ��
	auto b = 2.0;
	auto c = a + b;
	cout << typeid(c).name() << endl;
	//cout << z << endl;
	return 0;
}