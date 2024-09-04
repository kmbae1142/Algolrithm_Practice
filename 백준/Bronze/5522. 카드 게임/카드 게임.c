#include <stdio.h>


int main() {
    
    int score[5];
    int sum = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
        sum += score[i];
    }
    printf("%d", sum);
    
}