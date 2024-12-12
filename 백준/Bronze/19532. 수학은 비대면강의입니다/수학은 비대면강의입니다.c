#include <stdio.h>

int main() {

	int A[2][2];
	int b[2];
	int det, det_B1, det_B2;

	scanf("%d %d %d %d %d %d", &A[0][0], &A[0][1], &b[0], &A[1][0], &A[1][1], &b[1]);

	det = A[0][0] * A[1][1] - A[0][1] * A[1][0];
	det_B1 = b[0] * A[1][1] - A[0][1] * b[1];
	det_B2 = A[0][0] * b[1] - b[0] * A[1][0];
	
	printf("%d %d", det_B1 / det, det_B2 / det);
}