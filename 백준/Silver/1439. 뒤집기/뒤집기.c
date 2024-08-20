#include <stdio.h>
#include <string.h>

int main() {
    char ch;
    char temp = 0;
    int count0 = 0, count1 = 0;

    ch = getchar();  
    temp = ch;      

    if (temp == '0')
        count0++;
    else if (temp == '1')
        count1++; 

    while ((ch = getchar()) != '\n') {
        if (ch != temp) {
            if (ch == '0')
                count0++;
            else if (ch == '1')
                count1++;
            temp = ch;
        }
    }

    printf("%d\n", count0 < count1 ? count0 : count1);

    return 0;
}
