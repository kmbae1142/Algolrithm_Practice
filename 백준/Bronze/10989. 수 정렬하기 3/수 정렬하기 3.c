#include <stdio.h>

int numbers[10001];

int main() {

	int num, n;
	scanf("%d", &num);

	for (int i = 0; i < num; ++i) {
		scanf("%d", &n);
		numbers[n]++;
	}

	for (int i = 1; i < 10001; ++i) {
		for (int j = 0; j < numbers[i]; ++j) {
			printf("%d\n", i);
		}
	}

}