#include <stdio.h>
#include <stdlib.h>

int l = 0;
int r = 0;
int liquid[100000];

void twoPointer(int* num, int size) {

	int left = 0;
	int right = size - 1;
	int min = 2147483647;

	while (left < right) {

		int sum = num[left] + num[right];

		if (abs(sum) < min) {
			min = abs(sum);
			l = num[left];
			r = num[right];
			if (sum < 0)
				left++;
			else
				right--;
		}

		else if (sum < 0) {
			left++;
		}

		else {
			right--;
		}

	}

}

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &liquid[i]);
	}

	twoPointer(liquid, n);
	printf("%d %d", l, r);
}