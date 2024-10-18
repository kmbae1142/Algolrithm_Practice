#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool Primes[4000000];
// 0: 소수, 1: 합성수, 1, 0

int prime_numbers(bool* arr, int* rem, int len) {

	int count = 0;

	for (int i = 2; i < (int)sqrt(len) + 1; ++i) {

		if (arr[i] == true) {
			continue;
		}
 
		for (int j = i * i; j < len + 1; j += i) {
			arr[j] = true;
		}

	}

	for (int i = 2; i <= len; i++) {
		if (!arr[i])
			rem[count++] = i;
	}

	return count;

}

int twoPointer(int* arr, int size, int n) {

	int left = -1;
	int right = -1;
	int sum = 0, count = 0;

	while (left <= right && right < size) {

		if (sum < n) {
			sum += arr[++right];
		}
		else if (sum > n) {
			sum -= arr[++left];
		}
		else if (sum == n) {
			count++;
			sum -= arr[++left];
		}

	}

	return count;
}

int main() {

	int n;
	scanf("%d", &n);
	int* rem = (int*)malloc(sizeof(int) * n);

	int prime_count = prime_numbers(Primes, rem, n);

	printf("%d", twoPointer(rem, n, n));
}