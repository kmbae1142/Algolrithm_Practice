#include <stdio.h>


int main() {

    int num;
    int han_num = 0;
    int num1000, num100, num10, num1;

    scanf("%d", &num);

    if (num < 100) {
        han_num = num;
    }
    else if (num >= 100) {
        han_num = 99;
        for (int i = 99; i <= num; i++) {
            num100 = i / 100;
            num10 = (i % 100) / 10;
            num1 = i % 10;
            if ((num100 - num10) == (num10 - num1))
                han_num++;
        }
    }

    printf("%d", han_num);


}