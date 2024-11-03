#include <stdio.h>
#include <stdlib.h>

int liquid[5000];
int l, m, r;

long long abs2(long long num) {
	if (num >= 0)
		return num;
	else
		return -num;
}

int compare(const void* _n1, const void* _n2) {

	int* n1 = (int*)_n1;
	int* n2 = (int*)_n2;

	if (*n1 > *n2)
		return 1;
	else if (*n1 < *n2)
		return -1;
	else
		return 0;

}

void twoPointer(int* num, int size) {

	int left, right, mid;
	long long sumof3;
	long long minof3 = 3000000001LL;

	for (left = 0; left < size - 2; left++) {

		mid = left + 1;
		right = size - 1;
		
		while (mid < right) {
			sumof3 = (long long)num[left] + num[mid] + num[right];
			if (minof3 > abs2(sumof3)) {
				minof3 = abs2(sumof3);
				l = num[left];
				r = num[right];
				m = num[mid];
			}

			if (sumof3 < 0) {
				mid++;
			}
			else {
				right--;
			}
		}

	}

}

int main() {

	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &liquid[i]);
	}

	qsort(liquid, N, sizeof(int), compare);
	twoPointer(liquid, N);
	printf("%d %d %d", l, m, r);

}