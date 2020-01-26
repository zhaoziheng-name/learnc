#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
		int a[5] = { 1, 2, 3, 4, 5 };
		int b[5] = { 6, 7,8, 9, 10 };
		int i = 0, tmp = 0;
		for (i = 0; i < 5; i++)
		{
			tmp = a[i];
			a[i] = b[i];
			b[i] = tmp;
		}
		for (i = 0; i < 5; i++)
		{
			printf("%d  ", a[i]);
		}
		printf("\n");
		for (i = 0; i < 5; i++)
		{
			printf("%d  ", b[i]);
		}
		printf("\n");
			system("pause");
			return 0;
	}