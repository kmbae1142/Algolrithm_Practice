#include <stdio.h>

int arr[1000][5]; //행: 번호, 열: 반
int equal_class[1000][1000];

int main() {

	int num;
	int count = 0, max = -1, cap = 0;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < 5; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	for (int i = 0; i < num - 1; i++) {
		for (int k = 0; k < 5; k++) {
			for (int j = i + 1; j < num; j++) {
				if (arr[i][k] == arr[j][k]) {
					equal_class[i][j] = 1;
					equal_class[j][i] = 1;
				}
			}

		}
	}

	for (int i = 0; i < num; i++) {
		count = 0;
		for (int j = 0; j < num; j++) {
			count += equal_class[i][j];
		}
		if (max < count) {
			max = count;
			cap = i + 1;
		}
	}

	printf("%d", cap);
}