#include <stdio.h>

int main() {

	int num, temp, i, temp_i;
    scanf("%d", &num);

    for (i = 1; i <= 10000000; ++i) {
        if (i * (i + 1) / 2 <= num) {
            temp = i * (i + 1) / 2;
            temp_i = i;
        }
        else
            break;
    }

    if (temp_i * (temp_i + 1) / 2 == num) {
        if (temp_i % 2 == 0) { //짝수 군일때
            printf("%d/%d", temp_i, 1);
        }
        else { //홀수 군일때
            printf("%d/%d", 1, temp_i);
        }
    }
    else {
        if ((temp_i + 1) % 2 == 0) {
            printf("%d/%d", num - temp, temp_i + 2 - num + temp);
        }
        else {
            printf("%d/%d", temp_i + 2 - num + temp, num - temp);
        }
    }

}