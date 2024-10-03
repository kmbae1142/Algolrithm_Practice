#include <stdio.h>

int main() {

	int num[1000] = { 0, };
	int A, B, i, j = 0;
	int count = 0, current_index = 0, sum = 0;
	scanf("%d %d", &A, &B);

	while (1) {
		for (i = j; i <= j + current_index; i++) {
			if (count == B) break;
			num[i] = current_index + 1;
			count++;
		}
		if (count == B) break; 
		current_index++;
		j = i;
	}

	for (i = A - 1; i < B; i++) { 
		sum += num[i];
	}

	printf("%d", sum);

}