#include <stdio.h>
#include <math.h>

int num_of_n(int num, int len) {

	int sum = 0;

	while (num > 0) {
		sum += (int)pow(10, len - 1) * (num % 10);
		num -= num % 10;
		num /= 10;
		len--;
	}

	return sum;

}

int rev(int x) {

	if (x < 10) {
		return x;
	}
	else if (x >= 10 && x < 100) {
		return num_of_n(x, 2);
	}
	else if (x >= 100 && x < 1000) {
		return num_of_n(x, 3);
	}
	else {
		return num_of_n(x, 4);
	}

}

int main() {

	int X, Y;
	scanf("%d %d", &X, &Y);

	printf("%d", rev(rev(X) + rev(Y)));

}