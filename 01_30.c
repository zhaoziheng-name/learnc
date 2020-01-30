#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int global = 2019;

static int g_val = 2018;

#define MAX 1000
#define ADD(x,y) ((x)+(y))

int testDefine() {
	int sum = ADD(2, 3);
	printf("sum = %d\n", sum);
	sum = 10 * ADD(2, 3);
	printf("sum = %d\n", sum);
}

void test() {
	int i = 0;
	i++;
	printf("%d\n", i);

}

int main() {
	//int global = 2020;
	//char arr1[] = "bit";
	//char arr2[] = {'b', 'i', 't'};
	//char arr3[] = { 'b', 'i', 't', '\0' };
	//printf("%s\n", arr1);
	//printf("%s\n", arr2);
	//printf("%s\n", arr3);

	// 输出一个 '
	//printf("%c\n", '\'');
	//输出一个"
	//printf("%c\n", '\"');

	//printf("%d\n", strlen("abcdef"));
	// \32 被认为是转义字符
	//printf("%d\n", strlen("c:\test\328\test.c"));

	//for (int i = 0; i < 10; i++) {
	//	test();
	//}

	//printf("%d\n", g_val);

	// 指针
	//char ch = 'w';
	//char* pc = &ch;
	//*pc = 'q';
	//printf("%c\n", ch);

	// 32 位系统下,指针变量都为4个字节
	//printf("%d\n", sizeof(char*));
	//printf("%d\n", sizeof(short*));
	//printf("%d\n", sizeof(int*));
	//printf("%d\n", sizeof(double*));

	// 结构体
	//struct Stu {
	//	char name[20];  // 名字
	//	int age;	    // 年龄
	//	char sex[5];    // 性别
	//	char id[20];    // 学号
	//};

	// 结构体初始化
	//struct Stu s = { "张三", 20, "男", "17406050555" };
	// 访问操作符
	//printf("name = %s age = %d sex = %s id = %s\n", s.name, s.age, s.sex, s.id);

	//int	age = 0;
	//scanf("%d", &age);
	//if (age < 18) {
	//	printf("青少年\n");
	//}
	//else if (age >= 18 && age < 30) {
	//	printf("成年\n");
	//}
	//else if (age >= 30 && age < 50) {
	//	printf("中年\n");
	//}
	//else if (age >= 50 && age < 80) {
	//	printf("老年\n");
	//}
	//else {
	//	printf("牛逼\n");
	//}

	//int a = 0;
	//int b = 2;
	//if (a == 1) {
	//	if (b == 2) {
	//		printf("hehe\n");
	//	}
	//}
	//else {
	//	printf("haha\n");
	//}

	//int day = 0;
	//scanf("%d", &day);
	//switch (day) {
	//case 1:
	//case 2:
	//case 3:
	//case 4:
	//case 5:printf("weekday\n");
	//	break;
	//case 6:
	//case 7:printf("weekend\n");
	//	break;
	//}

	//int i = 1;
	//while (i <= 10) {
	//	if (i == 5)
	//		break;
	//		printf("%d ", i);
	//		i += 1;
	//}

	//int i = 1;
	//while (i <= 10) {
	//	i += 1;
	//	if (i == 5)
	//		continue;
	//	printf("%d ", i);
	//}

	//int ch = 0;
	//while ((ch = getchar()) != EOF) {
	//	if (ch < '0' || ch > '9')
	//		continue;
	//	putchar(ch);
	//}

	//int i = 0;
	//for (i = 1; i <= 10; i++) {
	//	if (i == 5)
	//		break;
	//	printf("%d ", i);
	//}

	//int i = 0;
	//int k = 0;
	//for (i = 0, k = 0; k = 0; i++, k++)
	//k++;
	//printf("hehe");

	// 阶乘和
	//int m = 0;
	//int n = 0;
	//int tmp = 1;
	//int sum = 0;
	//printf("请输入您想计算的阶乘数: ");
	//scanf("%d", &n);
	//for (m = 1; m <= n; m++) {	
	//	tmp *= m;
	//	sum += tmp;
	//}
	//printf("阶乘和为:%d\n", sum);

	// 字符浮动
	//char arr1[] = "welcome to bit...";
	//char arr2[] = "#################";
	//int left = 0;
	//int right = strlen(arr1) - 1;
	//printf("%s\n", arr2);
	// 用 while 循环实现
	//while (left <= right) {
	//	Sleep(1000);
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	left++;
	//	right--;
	//	printf("%s\n", arr2);
	//}

	// 用 for 循环实现
	//for (left = 0, right = strlen(arr1) - 1; left <= right; left++, right--) {
	//	Sleep(1000);
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//}

	// 模拟输入密码, 最多三次
	char psw[10] = "";
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++) {
		printf("please input:");
		scanf("%s", psw);
		if (strcmp(psw, "password ") == 0)
			break;
	}
	if (i == 3)
		printf("exit\n");
	else
		printf("log in\n");
		system("pause");
		return 0;
}