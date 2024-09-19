#include <stdio.h>
#define max(a, b) (((a) > (b)) ? (a) : (b))

int main() {

    unsigned long long a, b, c;
    scanf("%llu %llu %llu", &a, &b, &c);

    double result1 = (double)a * c / b;
    double result2 = (double)a * b / c;

    printf("%lld", (unsigned long long)max(result1, result2));

}