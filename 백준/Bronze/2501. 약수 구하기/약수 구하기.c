#include <stdio.h>

int main() {

	int N, K, count = 0, temp = 0;
	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			temp = i; 
			count++; 
			if (count == K)
				break;
		}
	}

	if (count >= K)
		printf("%d", temp);
	else {
		printf("0");
	}
}