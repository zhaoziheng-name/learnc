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
	printf("��������ô�����? 1 ��ʾ�� 0 ��ʾ����:\n");
	int x = 0;
	scanf("%d", &x);
	if (x == 1) {
		printf("����õ��õ�offer\n");
	}
	else if (x == 0) {
		printf("�㻹�����˰�\n");
	}
	else{
		printf("������������!\n");
	}
	system("pause");
	return 0;
}