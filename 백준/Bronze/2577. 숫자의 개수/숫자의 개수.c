#include <stdio.h>

int main() {

	int a, b, c, ch;
	int num, count = 0;
	int rem[10] = { 0, };
	scanf("%d\n%d\n%d", &a, &b, &c);
	
	num = a * b * c;

	while (num > 0) {
		rem[num % 10]++;
		num -= num % 10;
		num /= 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", rem[i]);
	}

}