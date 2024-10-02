#include <stdio.h>

int main() {

	int num;

	while (1) {

		int sum = 0;
		int rem[1000];
		int count = 0;
		scanf("%d", &num);

		if (num == -1)
			break;

		for (int i = 1; i < num; i++) {
			if (num % i == 0) {
				sum += i;
				rem[count++] = i;
			}
				
		}

		if (sum == num) {
			printf("%d = ", num);
			for (int i = 0; i < count; i++) {
				printf("%d", rem[i]);
				if (i < count - 1)
					printf(" + ");
			}
			printf("\n");

		}
		else {
			printf("%d is NOT perfect.\n", num);
		}
			
	}

}