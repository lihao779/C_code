//字符串逆序
#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int temp = 0;
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		temp = temp * 10 + n;
		sum += temp;

	}
	printf("%d\n", sum);
}