#include <stdio.h>
#include <stdlib.h>

int count = 0;

void twoPointer(int* arr, int size, int m) {

	int left = -1; 
	int right = -1;
	int sum = 0; 

	while (left <= right && right < size) { 

		if (sum == m) {  
			sum += arr[++right];  
			count++;
		}
		else if (sum > m) { 
			sum -= arr[++left];
		}
		else if (sum < m) {
			sum += arr[++right];
		}

	}

}

int main() {

	int n, m;
	scanf("%d %d", &n, &m);

	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	twoPointer(arr, n, m);

	printf("%d", count);

}