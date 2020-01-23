#include <stdio.h>

//闰年返回1,不是闰年返回0
//闰年:
//1.普通闰年
//2.世纪闰年
int IsLeapYear(int year) {
	if (year % 100 != 0) {
		if (year % 4 == 0) {
			return 1;
		}
		return 0;
	}else {
		if (year % 400 == 0) {
			return 1;
		}
		return 0;
	}
}

//二分查找
int BinarySearch(int arr[], int size, int toFind) {
	int left = 0;
	int right = size - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (toFind < arr[mid]) {
			right = mid - 1;
		} else if (toFind > arr[mid]) {
			left = mid + 1;
		} else {
			return mid;
		}
	}
	return -1;
}


void Func(int* x) {
	*x += 1;
}

void PrintNum(int num) {
	if (num > 9) {
		PrintNum(num / 10);
	}
	printf("%d ", num % 10);
}

int main() {
	//printf("%d\n", IsLeapYear(1900));

	//int arr[] = {0, 1, 2, 3, 4, 5, 6, 7 };
	//int size = sizeof(arr) / sizeof(arr[0]);
	//int ret = BinarySearch(arr, size, 7);
	//printf("ret = %d\n", ret);

	//int num = 0;
	//Func(&num);
	//printf("num = %d\n", num);

	PrintNum(1234);
	system("pause");
	return 0;
}