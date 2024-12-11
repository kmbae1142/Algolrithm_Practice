#include <stdio.h>

int count3(int num) {

	int count = 0;
	while (num > 0) {
		if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9) {
			count++;
		}
		num -= num % 10;
		num /= 10;
	}

	return count;

}

int main() {

	int N, sum = 0;
	scanf("%d", &N);
	
	for (int i = 1; i <= N; i++) {
		sum += count3(i);
	}

	printf("%d", sum);

}