#include <stdio.h>

void sort(int* arr, int size) {

    int min = 0, temp;

    for (int i = 0; i < size - 1; ++i) {
        min = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

}

int main() {

    int arr[3];
    
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &arr[i]);
    }

    sort(arr, 3);

    printf("%d", arr[1]);
}