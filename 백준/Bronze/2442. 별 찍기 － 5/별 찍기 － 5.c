#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = N - 1; j >= i; j--) {
			printf(" ");
		}

		for (int k = 1; k <= 2 * i - 1; k++) {
			printf("*");
		}
		printf("\n");
	}

}