#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool Primes[100000001];

void prime_numbers(bool arr[], int len) {

	for (int i = 2; i < (int)sqrt(len) + 1; ++i) {

		if (arr[i] == false) {
			continue;
		}

		for (int j = i * i; j < len + 1; j += i) {
			arr[j] = false;
		}

	}

}

int main() {

	int num;
	unsigned long long result = 1;
	unsigned long long rem = 1ULL << 32;
	scanf("%d", &num);

	for (int i = 0; i <= num; ++i) {
		Primes[i] = true;
	}

	prime_numbers(Primes, num);

	for (int i = 2; i <= num; ++i) {

		if (Primes[i] != false) {
			unsigned long long temp = i;

			while (temp * i <= (unsigned long long)num)
				temp *= i;

			result *= temp;
			result %= rem;
		}
	}

	printf("%llu", result);
}