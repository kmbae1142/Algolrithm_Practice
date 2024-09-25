int main() {

	int n, i, j, k, l;
	scanf("%d", &n);
	int count = n * 2 - 1;
	int star = 1;

	for (i = count; i >= n; i--) { 
		for (j = 0; j < (count - star) / 2; j++) { 
			printf(" ");
		}
		for (k = count - j * 2; k > 0; k--) {
			printf("*");
		}
		star += 2;
		printf("\n");
	}

	star -= 4;
	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < (count - star) / 2; j++) {
			printf(" ");
		}
		for (k = count - j * 2; k > 0; k--) {
			printf("*");
		}
		star -= 2;
		if (i > 1)
			printf("\n");
	}

}