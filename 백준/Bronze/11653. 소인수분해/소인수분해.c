#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 2; i < n + 1; i++) {
        for (;;) {
            if (n % i == 0) {
                n /= i;
                printf("%d\n", i);
            }
            else {
                break;
            }
        }
    }

}