#include <stdio.h>

int sqrt2(int num) {

	int result = 0;

	for (int i = 1; i * i <= num; ++i) {
		if (i * i == num) {
			result = i;
			break;
		}
	}

	return result;
}

int main() {

	int m, n;
	int min = 10001, sum = 0;
	scanf("%d", &m);
	scanf("%d", &n);


	for (int i = m; i <= n; ++i) {
		if (sqrt2(i)) {
			sum += i; 
			if (min > i) {
				min = i; 
			}
		}
	}

	if (sum != 0)
		printf("%d\n%d", sum, min);
	else {
		printf("-1");
	}

}