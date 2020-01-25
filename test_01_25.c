#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//非递归
//int Strlen(char str[]) {
//	int i = 0;
//	while (str[i] != '\0') {
//		i++;
//	}
//	return i;
//}

//递归
int Strlen(char str[]) {
	if (str[0] == '\0') {
		return 0;
	}
	return 1 + Strlen(str + 1);
}

//阶乘
int Factor(int n) {
	if (n == 1) {
		return 1;
	}
	return n * Factor(n - 1);
}

//生兔子(重复运算多)
//int Fib(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	if (n == 2) {
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}

//生兔子(使用循环来保存变量,避免重复运算)
int Fib(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	int last1 = 1;//倒数第一项
	int last2 = 1;//倒数第二项
	int cur = 0;//当前项
	for (int i = 3; i <= n; i++) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

int main() {
	//char str[] = "abcd";
	//printf("%d\n",Strlen(str));

	//printf("%d\n", Factor(5));

	printf("%d\n", Fib(40));
	system("pause");
	return 0;
}