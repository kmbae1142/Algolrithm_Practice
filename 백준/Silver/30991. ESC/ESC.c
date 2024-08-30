#include <stdio.h>
int main() {
	int n;
	long long c[32];
	c[0] = 1;
	long long b = 1;
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		c[i] = c[i - 1] - 4 * b;
		b += c[i - 1];
	}
	printf("%lld", c[n - 1]);
}