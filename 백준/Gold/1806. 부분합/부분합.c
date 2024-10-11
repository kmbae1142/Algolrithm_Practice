#include <stdio.h>

int num[100000];

int twoPointer(int* num, int size, int S) {

	int left = -1;
	int right = -1;
	int len = 0, min = 100001;
	long long sum = 0;

	while (left <= right && right < size) {

		len = right - left;

		if (sum < S) {
			sum += num[++right];
		}
		else if (sum >= S) {
			if (min > len) {
				min = len;
			}
			sum -= num[++left];
		}

	}

	return min;
}

int main() {

	int N, S;
	scanf("%d %d", &N, &S);

	for (int i = 0; i < N; ++i) {
		scanf("%d", &num[i]);
	}

	if (twoPointer(num, N, S) == 100001)
		printf("0");
	else
		printf("%d", twoPointer(num, N, S));

}