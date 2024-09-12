#include <stdio.h>
#include <stdlib.h>
#define min(a, b) (((a) < (b)) ? (a) : (b))

int dp_memo(int* dp, int N, int size) {

	for (int i = 2; i < size; ++i) {

		dp[i] = dp[i - 1] + 1;

		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);

	}

	return dp[N];
}

int main() {

	int N;
	scanf("%d", &N);
	int* dp = (int*)malloc(sizeof(int) * (N + 1));

	if (dp != NULL) 
		dp[1] = 0;

	printf("%d", dp_memo(dp, N, N + 1));

}