#include <stdio.h>
#include <stdlib.h>

void reverse(int* arr, int i, int j) {

	for (int k = 0; k <= (j - i) / 2; ++k) {
		int temp = arr[j - k];
		arr[j - k] = arr[k + i];
		arr[k + i] = temp;
	}
	
}

int main() {

	int n, m;
	int i, j;

	scanf("%d %d", &n, &m);
	
	int* arr = (int*)malloc(sizeof(int) * n);

	if (arr != NULL) {
		for (int l = 0; l < n; ++l) {
			arr[l] = l + 1;
		}
	}

	for (int l = 0; l < m; ++l) {
		scanf("%d %d", &i, &j);
		reverse(arr, i - 1, j - 1);
	}

	for (int l = 0; l < n; ++l) {
		if (arr != NULL) {
			printf("%d ", arr[l]);
		}
	}

}
