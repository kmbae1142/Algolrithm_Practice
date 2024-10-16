#include <stdio.h>

int main() {

	int T, max, temp;
	scanf("%d", &T);

	while (T--) {

		int A[10] = { 0, };
		for (int i = 0; i < 10; i++) {
			scanf("%d", &A[i]);
		}

		for (int i = 0; i < 3; i++) {

			max = i;
			for (int j = i + 1; j < 10; j++) {
				if (A[max] < A[j]) {
					max = j;
				}
			}
			
			temp = A[max];
			A[max] = A[i];
			A[i] = temp;

		}

		printf("%d\n", A[2]);
	}

}