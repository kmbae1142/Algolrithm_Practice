#include <stdio.h>

int main() {

    int n1, n2;
    int gcd, lcm;
    scanf("%d %d", &n1, &n2);

    if (n1 > n2) {
        for (int i = 1; i <= n2; i++) {
            if (n1 % i == 0 && n2 % i == 0)
                gcd = i;
        }
    }else {
        for (int i = 1; i <= n1; i++) {
            if (n1 % i == 0 && n2 % i == 0)
                gcd = i;
        }
    }

    lcm = (n1 / gcd) * (n2 / gcd) * gcd;

    printf("%d\n%d", gcd, lcm);


}