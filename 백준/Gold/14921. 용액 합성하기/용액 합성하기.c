#include <stdio.h>

int liquid[100000];

int twoPointer(int* num, int size) {

	int left = 0;
	int right = size - 1;
	int min = 2147483647;
	int result = 0;

	while (left < right) {

		int sum = num[left] + num[right];

		if (abs(sum) < min) {
			min = abs(sum);
			result = sum;
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

	return result;
	
}

int main() {

	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &liquid[i]);
	}

	printf("%d", twoPointer(liquid , n));

}