#include <stdio.h>


int main() {

    int num, temp, i = 0, j = 0;
    int arr[10];
    int arr_num = 0;


    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        arr[i] = num % 42;
    }

    for (i = 0; i < 10; i++) {
        for (j = 8; j >= i; j--) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 9; i++) {
        if (arr[i] != arr[i + 1])
            arr_num++;
        else
            continue;
    }

    printf("%d", arr_num + 1);

}