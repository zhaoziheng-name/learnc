#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int huiwen() {
	int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int i = 0, sum = 0;
	for (i = m; i; i /= n) {
		sum = sum * n + i % n;
	}
	if (sum == m) {
		printf("是回文数\n");
	}
	else {
		printf("不是回文数\n");
	}
}

//enum {
//	SIZE = 5,
//};

//#define SIZE 5

int main() {
	int arr[4] = { 9, 5, 2, 7 };
	printf("%d\n", arr[3]);
	system("pause");
	return 0;
}