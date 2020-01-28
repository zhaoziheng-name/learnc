#include <stdio.h>
#include <stdlib.h>

void Func(int* arr[], int size) {
	for (int i = 0; i < size; i++)
		printf("%d\n", arr[i]);
}

//ð������(����)
void BubbbleSort(int arr[], int size) {
	//ÿ������С
	//boundΪ�߽�
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			//����ֻ�轫���ںŸ�ΪС�ں�
			if (arr[cur - 1] > arr[cur]) {
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}

int main() {
	int arr[] = { 9, 5, 2, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbbleSort(arr, size);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	int arr[] = { 9, 5, 2, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Func(arr, size);

	//����Ϊ3��һά����, ÿ��Ԫ�س���Ϊ4.
	int arr[][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 },
	};
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 4; col++) {
			printf("%d ",arr[row][col]);
			printf("\n");
			printf("&arr[row][col] = %p\n", row, col, &arr[row][col]);
		}
		printf("\n");
	}

	int i = 0;
	int j = 0;
	for (i = 1; i < 10; i++) {
		for (j = 1; j < i; j++) {
			int m = i * j;
			printf("%d * %d = %d", i, j, m);
			printf("\n");
		}
	}

	int n = 9;
	int i = 0, j = 0;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d  ",j, i, j*i);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}