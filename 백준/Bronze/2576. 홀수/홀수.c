#include <stdio.h>

int main() {
    
    int num, min = 101, sum = 0;
    
    for (int i = 0; i < 7; i++) {
        scanf("%d", &num);
        if (num % 2 != 0) {
            sum += num;
            if (min > num)
                min = num;
        }
    }
    
    if (sum) {
        printf("%d\n%d", sum, min);
    }
    else {
        printf("-1");
    }
    
}