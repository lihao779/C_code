#include<stdio.h>
int main()
{
	//int n = 9;
	//float *p = (float *)&n;
	//printf("%d \n%f\n ", n, *p);
	////(-1)^S * M *  E^(2);
	//*p = 9.0;
	//printf("%d\n%f\n", n, *p);
	//return 0;
	/*char *p1 = "abcdef";
	char *p2 = "abcdef";
	printf("%p %p ",&p1, &p2);
	char *arr[5];
	char *(*pa)[5] = &arr;
	return 0;*/
	int arr[10] = { 0 };
	int(*pc)[10] = &arr;
	printf("%d\n", sizeof(pc));
}