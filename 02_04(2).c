#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int huiwenshu() {
	int m = 0, n = 0;
	printf("��������Ҫ�жϵ����ͽ���(�ÿո����):");
	scanf("%d%d",&n, &m);   
	int i = 0, sum = 0;
	for (i = n; i; i /= m) {
		sum = sum * m + i % m;
	}
	if (sum == n) {
		printf("�ǻ�����\n");
	}
	else {
		printf("���ǻ�����\n");
	}
	system("pause");
	return 0;
}


int d4p0() {
	int i = 0, j = 0, sum = 0;
	int n = 1;
	int flag = 10;
	for (i = 0; i < 100000000; i++) {
		if (i == flag) {
			n++;
			flag *= 10;
		}
		for (j = i; j; j /= 10) {
			sum += pow(j % 10, n);
		}
		if (sum == i) {
			printf("%d\n", i);
		}
		sum = 0;
	}
	system("pause");
	return 0;
}


int main() {
	int m = 0, n = 0;
	scanf("%d%d", &m, &n);
	int i = 0, tmp = 0, sum = 0;
	for (i = 0; i < n; i++) {
		tmp = tmp * 10 + m;
		sum += tmp;
	}
	printf("%d\n", sum);
	system("pause");
	return 0;
}