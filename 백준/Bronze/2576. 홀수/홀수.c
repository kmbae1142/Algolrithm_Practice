#include <stdio.h>


int smallest(int a[], int i) {

    int j, min = 100;

    for (j = 0; j < i; j++) {
        if (a[j] % 2 == 1) {
            if (a[j] < min)
                min = a[j];
        }
    }

    return min;
}

int main() {

    int num[7];
    int rem = 0;
    int sum = 0;

    for (int i = 0; i < 7; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 != 0) {
            sum += num[i];
        }
    }

    if (sum == 0) {
        printf("%d", -1);
    }
    else {
        printf("%d\n", sum);
        printf("%d", smallest(num, 7));
    }


}