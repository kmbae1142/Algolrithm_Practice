#include <stdio.h>

int main() {

	int num[5];
	int min, sum = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < 4; i++) {
		min = i;
		for (int j = i + 1; j < 5; j++) {
			if (num[min] > num[j])
				min = j;
		}
		int temp = num[i];
		num[i] = num[min];
		num[min] = temp;
	}

	for (int i = 0; i < 5; i++) {
		sum += num[i];
	}

	printf("%d\n%d", sum / 5, num[2]);
    
}