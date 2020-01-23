#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int Max(int x, int y) {
	if (x > y) {
		return x;
	}
	return y;
}
void Swap(int x, int y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int IsPrime(int num) {
	if (num == 1 || num == 2) {
		return  1;
	}
	for(int i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	//int i = 0;
	//int sum = 0;
	//int n = 0;
	//int ret = 1;
	//scanf("%d",&n);
	//for (i = 1; i <= n; i++) {
	//	ret = 1;
	//	int j = 0;
	//	for (j = 1; j <= i; j++) {
	//		ret *= j;
	//	}
	//	sum += ret;
	//}
	//printf("%d\n", sum);
	//int x = 10;
	//int y = 20;
	//Swap(x, y);
	//printf("x = %d, y = %d\n", x, y);
	printf("%d\n", IsPrime(9));
	system("pause");
	return 0;
}