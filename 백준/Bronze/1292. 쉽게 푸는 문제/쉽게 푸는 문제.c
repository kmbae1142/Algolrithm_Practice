#include <stdio.h>

int main() {

	int num[1000] = { 0, };
	int numc = 1, numc2 = 1, i = 0, j = 0;
	int temp = numc + i;
	int num1, num2, sum = 0;

	while (1) {

		if (temp > 999)
			temp = 999;

		for (j = i; j <= temp; ++j) {
			num[j] = numc;
		}

		if (temp == 999)
			break;

		numc++;
		i += numc - 1;
		temp = numc + i;
				
	}
	
	scanf("%d %d", &num1, &num2);

	for (i = num1 - 1; i < num2; i++) {
		sum += num[i];
	}

	printf("%d", sum);

}