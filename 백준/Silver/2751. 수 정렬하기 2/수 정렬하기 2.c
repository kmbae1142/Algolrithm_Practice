#include <stdio.h>


int compare(const int *a, const int *b) {
    return (*a - *b);
}

int main() {

    int num, temp;
    scanf("%d", &num);
    int arr[num];

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, num, sizeof(int), compare);

    for (int i = 0; i < num; i++) {
        printf("%d\n", arr[i]);
    }
}