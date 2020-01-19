#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 0, b = 0, c = 0;
	printf("请输入您要比较的三个数:\n");
	scanf("%d%d%d", &a, &b, &c);
	int tmp = 0;
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	printf("%d,%d,%d", a, b, c);
	system("pause");
	return 0;
}