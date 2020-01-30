#include <stdio.h>

void test() {
	int i = 0;
	i++;
	printf("%d\n",i);
}

// 这个static并不能修改局部变量的作用域
// 只能修改生命周期
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

// 运行结果为10个1, 不能保存上一次的变量
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

// 运行结果为1,2,3,4,5,6,7,8,9,10
// 每次调用test函数可以保存上一次的变量
int main() {
	for (int i = 0; i < 10; i++) {
		test();
	}
	system("pause");
	return 0;
}