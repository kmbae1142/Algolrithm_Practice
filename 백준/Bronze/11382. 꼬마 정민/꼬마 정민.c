#include <stdio.h>

int main () {
    
    unsigned long long num1, num2, num3;
    scanf("%llu %llu %llu\n", &num1, &num2, &num3);
    
    printf("%llu", num1 + num2 + num3);
    return 0;
}