#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int num_divisor(char num[]) {
	int sum = 0, i;
	for (i = 0; i < strlen(num); ++i) {
		sum += num[i] - '0';
	}
	return sum;
}

int main() {

	char str[9] = { 0, };
	int sum = 0, num, i, count = 0;
	scanf("%d", &num);

	for (i = 1; i <= num; ++i) {
		sprintf(str, "%d", i);
		if (i % num_divisor(str) == 0) {
			count++;
		}
		memset(str, 0, sizeof(str));
	}

	printf("%d", count);
}