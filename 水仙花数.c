#include <stdio.h>
#include <math.h>

int main() {
	int n = 0, tmp = 0;
	for (n = 0; n < 1000; n++) {
		tmp = pow(n % 10, 3) +
			pow(n / 10 % 10, 3) +
			pow(n / 100, 3);
		if (tmp == n) {
			printf("%d\n",n);
		}
	}
	system("pause");
	return 0;
}