#include <stdio.h>

void test() {
	int i = 0;
	i++;
	printf("%d\n",i);
}

// ���static�������޸ľֲ�������������
// ֻ���޸���������
int main() {
	for (i = 0; i < 10; i++) {
		test();
	}
	system("pause");
	return 0;
}

void test() {
	int i = 0;
	i++;
	printf("%d\n", i);
}

// ���н��Ϊ10��1, ���ܱ�����һ�εı���
int main() {
	for (int i = 0; i < 10; i++) {
		test();
	}
	system("pause");
	return 0;
}

void test() {
	static int i = 0;
	i++;
	printf("%d\n", i);
}

// ���н��Ϊ1,2,3,4,5,6,7,8,9,10
// ÿ�ε���test�������Ա�����һ�εı���
int main() {
	for (int i = 0; i < 10; i++) {
		test();
	}
	system("pause");
	return 0;
}