#include <stdio.h>

int sum_10(int num) {

	int sum = 0;

	while (num > 0) {
		sum += num % 10;
		num -= num % 10;
		num /= 10;
	}

	return sum;
}

int sum_12(int num) {

	int sum = 0;

	while (num > 0) {
		sum += num % 12;
		num /= 12;
	}

	return sum;
}

int sum_16(int num) {

	int sum = 0;

	while (num > 0) {
		sum += num % 16;
		num /= 16;
	}

	return sum;
}

int main() {

	for (int i = 1000; i <= 9999; i++) {
		if (sum_10(i) == sum_12(i) && sum_12(i) == sum_16(i) && sum_16(i) == sum_10(i)) {
			printf("%d\n", i);
		}
	}
    return 0;
}