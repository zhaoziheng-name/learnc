#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//�ǵݹ�
//int Strlen(char str[]) {
//	int i = 0;
//	while (str[i] != '\0') {
//		i++;
//	}
//	return i;
//}

//�ݹ�
int Strlen(char str[]) {
	if (str[0] == '\0') {
		return 0;
	}
	return 1 + Strlen(str + 1);
}

//�׳�
int Factor(int n) {
	if (n == 1) {
		return 1;
	}
	return n * Factor(n - 1);
}

//������(�ظ������)
//int Fib(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	if (n == 2) {
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}

//������(ʹ��ѭ�����������,�����ظ�����)
int Fib(int n) {
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 1;
	}
	int last1 = 1;//������һ��
	int last2 = 1;//�����ڶ���
	int cur = 0;//��ǰ��
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