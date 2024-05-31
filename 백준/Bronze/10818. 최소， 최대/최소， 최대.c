#include <stdio.h>

int largest(int a[], int n) {

    int i, max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int smallest(int a[], int n) {

    int i, min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }

    return min;
}

int main() {
    
    int put_num;
    scanf("%d\n", &put_num);
    int num[put_num];
    int max = 0, min = 0;
        
    for (int i = 0; i < put_num; i++) {
        scanf("%d ", &num[i]);
    }
    
    max = largest(num, put_num);
    min = smallest(num, put_num);
    
    printf("%d %d", min, max);
    return 0;
}