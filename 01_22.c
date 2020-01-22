//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//int num = 0;
//int i = 0;
//for (i = 100; i < 201; i += 1) {
//	int j = 0;
//	for (j = 2; j < i; j++) {
//		if (i%)
//	}
//}
//	system("pause");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++) 
//	{
//		for (j = 1; j <= i; j++) 
//		{
//			printf("  %d*%d=%d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int a[10] = { 3, 5, 6, 1, 2, 7, 9, 8, 4, 10 };
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			if (a[i]<a[j])
//			{
//				int num = a[i];
//				a[i] = a[j];
//				a[j] = num;
//
//			}
//		}
//	}
//	for (int k = 0; k < 10; k++)
//	{
//		printf("%d \n", a[k]);
//	}
//
//	system("pause");
//	return 0;
//}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = a ; i > 0; i--)
	{
		if ((a%i == 0) && (b%i == 0))
		{
			printf("%d ", i);
			break;
		}
	}

	system("pause");
	return 0;
}