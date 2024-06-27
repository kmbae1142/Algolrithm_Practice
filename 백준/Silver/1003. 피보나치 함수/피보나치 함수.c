#include <stdio.h>

int fibo0(int n) {

    if (n == 0 || n == 2 || n == 3) {
        return 1;
    }
    if (n == 1) {
        return 0;
    }

    int fn1 = 1;
    int fn2 = 1;
    int fn;

    for (int i = 3; i < n; ++i) {
        fn = fn1 + fn2;
        fn1 = fn2;
        fn2 = fn;
    }

    return fn;

}

int fibo1(int n) {

    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int fn1 = 0;
    int fn2 = 1;
    int fn;

    for (int i = 1; i < n; ++i) {
        fn = fn1 + fn2;
        fn1 = fn2;
        fn2 = fn;
    }

    return fn;

}

int main() {

    int num;
    int n;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &n);
        printf("%d %d\n", fibo0(n), fibo1(n));
    }

}