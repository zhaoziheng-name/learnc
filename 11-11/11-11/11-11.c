#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//struct  Student
//{
//	char name[100];
//	int age;
//	int score;
//};
int Odd(int x){
	if (x % 2 != 0){
		return 1;
	}
	return 0;
}
int main() {
	printf("你会认真敲代码吗? 1 表示会 0 表示不会:\n");
	int x = 0;
	scanf("%d", &x);
	if (x == 1) {
		printf("你会拿到好的offer\n");
	}
	else if (x == 0) {
		printf("你还是算了吧\n");
	}
	else{
		printf("您的输入有误!\n");
	}
	system("pause");
	return 0;
}