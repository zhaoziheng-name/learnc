#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Sex {
	MALE,
	FEMALE,
};

struct Student {
	// ��Ա/����/�ֶ�
	int id;
	char name[20];
	int score;
	enum Sex sex;
};

int main() {
	int i = 0, a = 0, b = 2, d = 4;
	i = a++ && ++b && d++; //1 2 4
	i = a++ || ++b || d++; //1 3 4
	printf("a = %d, b = %d, d = %d\n", a, b, d);
	int i = 1;
	int ret = ++i + ++i + ++i;
	printf("ret = %d\n", ret); // 12
	printf("char %d\n", sizeof(char));
	printf("short %d\n", sizeof(short));
	printf("int %d\n", sizeof(int));
	printf("long %d\n", sizeof(long));
	printf("long long %d\n", sizeof(long long));
	printf("double %d\n", sizeof(double));
	printf("float %d\n", sizeof(float));
	int arr[4] = { 1, 2, 3, 4 };
	int* p1 = &arr[0];
	int* p2 = &arr[2];
	printf("%p,%p\n", p1, p2);
	//arr���� int[4]
	int arr[4];
	//p����ָ��. &arr�͵õ�������ָ��
	//p������ int(*)[4]
	int(*p)[4] = &arr;
	//arr���� int[4]
	int arr[4] = { 0 };
	//arr���Ϳ��Կ����� int*
	printf("%p\n", arr);
	//&arr���Ϳ��Կ����� int(*)[4]
	printf("%p\n", &arr);
	struct Student s = {10, "����", 100, MALE};
	s.id = 99;
	printf("%d\n", s.id);
	strcpy(s.name, "����");
	printf("%s\n", s.name);
	system("pause");
	return 0;
}