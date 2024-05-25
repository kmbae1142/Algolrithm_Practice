#include <stdio.h>
#include <math.h>
#include <string.h>

char num[1000003];
char num8[333334];


int main() {

    int i;
    int j, k = 0;
    int count = 0, temp_sum = 0, n = 0;
    int arr_size = sizeof(num) / sizeof(char);
    
    for (i = 0; i < arr_size; i++) {
        num[i] = '0';
    }
    
    scanf("%s", num);

    j = strlen(num);

    if (j % 3 != 0) {
        while (1) {
            if ((j + k) % 3 == 0) {
                break;
            }
            k++;
        }
    }

    for (i = strlen(num) - 1; i >= 0; i--) {
        if (n == 3) {
            num8[count] = temp_sum + '0';
            n = 0;
            temp_sum = 0;
            count++;
        }
        temp_sum += (num[i] - 48) * pow(2, n);
        n++;
    }

    num8[strlen(num8)] = temp_sum + '0';
    
    for (i = strlen(num8) - 1; i >= 0; i--) {
        printf("%c", num8[i]);
    }


}