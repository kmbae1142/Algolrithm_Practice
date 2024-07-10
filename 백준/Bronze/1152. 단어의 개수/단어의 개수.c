#include <stdio.h>
#include <string.h>

int main() {

    char str[1000002] = "";
    int voca = 0;
    fgets(str, sizeof(str), stdin);

    if (str[0] == ' ') {
        if (str[strlen(str) - 2] == ' ') {
            for (int i = 1; i < strlen(str); i++) {
                if (str[i] == ' ') {
                    voca++;
                }
            }
            printf("%d", voca);
        }
        else {
            for (int i = 1; i < strlen(str); i++) {
                if (str[i] == ' ') {
                    voca++;
                }
            }
            printf("%d", voca + 1);
        }
        
    }
    else {
        if (str[strlen(str) - 2] == ' ') {
            for (int i = 0; i < strlen(str); i++) {
                if (str[i] == ' ') {
                    voca++;
                }
            }
            printf("%d", voca);
        }
        else {
            for (int i = 0; i < strlen(str); i++) {
                if (str[i] == ' ') {
                    voca++;
                }
            }
            printf("%d", voca + 1);
        }
        
    }


}