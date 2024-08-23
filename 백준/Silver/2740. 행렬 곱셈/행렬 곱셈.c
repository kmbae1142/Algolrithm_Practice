#include <stdio.h>

int main() {

	int arr1[100][100] = { 0, };
	int arr2[100][100] = { 0, };
	int n, m, k, temp = 0;

	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}

	scanf("%d %d", &m, &k);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}

	for (int i = 0; i < n; i++) {
		for (int l = 0; l < k; l++) {
			temp = 0;
			for (int j = 0; j < m; j++) {
				temp += arr1[i][j] * arr2[j][l];
			}
			printf("%d ", temp);
		}
		puts("");
	}

}