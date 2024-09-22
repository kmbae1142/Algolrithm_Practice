#include <stdio.h>
#include <stdlib.h>

int num[1000000];

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

int main() { 

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }

    qsort(num, n, sizeof(int), compare);

    for (int i = 0; i < n; ++i) {
        printf("%d\n", num[i]);
    }

}