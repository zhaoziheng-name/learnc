#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
	{
	printf("�������������뽻����ֵ:(�������ö��Ÿ���)\n");
	int a = 0, b = 0;
	scanf("%d,%d", &a, &b );
	printf("a = %d, b = %d\n", a , b );
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a = %d, b = %d\n", a, b); 
		system("pause");
		return 0;
	}