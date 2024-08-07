#include <stdio.h>

int main() {
    
    int num[31] = {0,};
    int n;
    
    for (int i = 0; i < 28; i++) {
        scanf("%d", &n);
        num[n] = n;
    }
    
    for (int i = 1; i <31; i++) {
        if (num[i] == 0)
            printf("%d\n", i);
    }
}