#include <stdio.h>

int main() {

	int N, M;
	int i, j;
	int num[100] = { 0, };
	scanf("%d %d", &N, &M);

	for (int l = 0; l < N; l++) {
		num[l] = l + 1;
	}

	for (int l = 0; l < M; l++) {
		scanf("%d %d", &i, &j);
		int temp = num[i - 1];
		num[i - 1] = num[j - 1];
		num[j - 1] = temp;
	}

	for (int l = 0; l < N; l++) {
		printf("%d ", num[l]);
	}

}