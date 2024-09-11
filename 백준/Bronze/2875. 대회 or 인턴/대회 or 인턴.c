#include <stdio.h>

int main() {

	int N, M, K, i = 0;
	scanf("%d %d %d", &N, &M, &K);

	while (N >= 0 && M >= 0 && N + M >= K) {
		N -= 2;
		M--;
		i++;
	}

	printf("%d", i - 1);
}