#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0, max = 1;
	printf("请输入两个数\n");
	scanf("%d%d", &a, &b);
	int smaller = a < b ? a : b;
	int i = 0;
	for (i = 2; i <= smaller; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			max = i;
		}
	}
	printf("max = %d\n", max);
	system("pause");
	return 0;
}