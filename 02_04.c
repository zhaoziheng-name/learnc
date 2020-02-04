#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main() {
	int n = 0;
	printf("请输入您想打印的行数:");
	scanf("%d",&n);
	int i = 0,  j = 0;
	for (i = 1; i <= n; i++) {
		for (j = 0; j < i; j++) {
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n - 1; i >= 1; i--) {
		for (j = 0; j < i; j++) {
			putchar('*');
		}
		putchar('\n');
	}
		system("pause");
	return 0;
}