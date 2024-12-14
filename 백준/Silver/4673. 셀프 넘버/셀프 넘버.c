#include <stdio.h>

int self_number[10001];

int sum(int num) {

	int sum = num;

	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}

	return sum;

}

int main() {

	int temp;

	for (int i = 1; i <= 10000; i++) {
		temp = sum(i);
		if (temp <= 10000)
			self_number[temp] = 1;
	}

	for (int i = 1; i <= 10000; i++) {
		if (self_number[i] == 0) {
			printf("%d\n", i);
		}
	}

}