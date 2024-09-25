#include <stdio.h>

int main() {

	int num[8];
	int temp, mixed = 0;

	for (int i = 0; i < 8; i++) {
		scanf("%d", &num[i]);
	}

	temp = num[1] - num[0];
	for (int i = 1; i < 7; i++) {
		if (num[i + 1] - num[i] == temp) {
			continue;
		}
		else {
			mixed = 1;
			break;
		}
	}

	if (mixed) {
		printf("mixed");
	}
	else if (temp == 1) {
		printf("ascending");
	}
	else {
		printf("descending");
	}

}