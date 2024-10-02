#include <stdio.h>

int main() {

	int num[10];
	int rem[42] = { 0, };
	int count = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		rem[num[i] % 42]++;
	}

	for (int i = 0; i < 42; i++) {
		if (rem[i] != 0)
			count++;
	}

	printf("%d", count);

}