#include <stdio.h>

int sum(int n) {
	if (n / 10 + n % 10 < 10)
		return (n % 10) * 10 + (n / 10 + n % 10);
	else
		return (n % 10) * 10 + (n / 10 + n % 10) % 10;
}

int main() {

	int num, mem, count = 0;
	scanf("%d", &num);
	mem = num;

	while (1) {
		num = sum(num);
		if (num == mem)
			break;
		count++;
	}

	printf("%d", count + 1);
}