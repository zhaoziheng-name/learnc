#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

void sxh() {
	for (int i = 100; i < 1000; i++) {
		int a = i % 10;
		int b = i / 10 % 10;
		int c = i / 100;
		int tmp = pow(a, 3) + pow(b, 3) + pow(c, 3);
		if (tmp == i) {
			printf("%d\n", i);
		}
	}
}

int main() {
	sxh();
	//int x, y, z;
	//char c;
	//printf("�����ʽΪ:  �������������\n");
	//scanf("%d%c%d", &x, &c, &y);
	//switch (c)
	//{
	//case'+':
	//	z = x + y;
	//	break;
	//case'-':
	//	z = x - y;
	//	break;
	//case'*':
	//	z = x * y;
	//	break;
	//case'/':
	//	z = x / y;
	//	break;
	//default:
	//	printf("������������!");
	//	break;
	//}
	//printf("������Ϊ:%d\n", z);
	system("pause");
	return 0;
}