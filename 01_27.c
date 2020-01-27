#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int IsOdd(int x) {
	if (x % 2 == 0) {
		return 0;
	}
	return 1;
}

int main() {
	short arr[] = { 9, 5, 2, 7, 3, 6, 8, 1, -1, 100};
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		printf("%d, ", arr[i]);
	}
	char str1[] = { 'a', 'b', 'c' };
	char str2[] = "abc";
	printf("%d\n", strlen(str1));
	printf("%d\n", strlen(str2));
	int num = 1;
	while (num <= 100) {
		if (IsOdd(num) == 1) {
			printf("%d\n", num);
		}
		num += 1;
	}
	int arr[4] = { 9, 5, 2, 7 };
	for (int i = 0; i < 4; i++) {
		printf("%p\n", &arr[i]);
	}
	int i = 0, count = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			count++;
		}
		if (i / 10 % 10 == 9) {
			count++;
		}
	}
	printf("出现9的次数为%d\n", count);
	int i = 0, sum = 0, tmp = 1;
	for (i = 1; i <= 10; i++) {
		tmp *= i;
		sum += tmp;
	}
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}