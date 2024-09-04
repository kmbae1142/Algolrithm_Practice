#include <stdio.h>

int main() {

    int num;
    int i, j, k;
    scanf("%d", &num);

    for (i = num; i > 0; i--) {
        for (j = i; j > 1; j--) {
            printf(" ");
        }
        for (k = num; k >= i; k--) {
            printf("*");
        }
        printf("\n");
    }
}