#include <stdio.h>
#include <stdlib.h>

int num[100000];

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

int twoPointer(int* num, int size, int x) {
    int left = 0;
    int right = size - 1;
    int count = 0;

    while (left < right) {
        int sum = num[left] + num[right];

        if (sum == x) {
            count++;
            left++;
            right--;
        } else if (sum < x) {
            left++;
        } else {
            right--;
        }
    }

    return count;
}

int main() {
    int n, x;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &x);

    qsort(num, n, sizeof(int), compare);
    printf("%d", twoPointer(num, n, x));
}