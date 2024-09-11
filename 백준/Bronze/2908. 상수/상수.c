#include <stdio.h>

int main() {

	int n1[3];
	int n2[3];
	int a, b, re1, re2;

	scanf("%d %d", &a, &b);

	n1[0] = a % 10;
	n1[1] = ((a - n1[0]) / 10) % 10;
	n1[2] = a / 100;

	n2[0] = b % 10;
	n2[1] = ((b - n2[0]) / 10) % 10;
	n2[2] = b / 100;

	re1 = n1[0] * 100 + n1[1] * 10 + n1[2];
	re2 = n2[0] * 100 + n2[1] * 10 + n2[2];

	printf("%d", (re1 > re2) ? re1 : re2);

}