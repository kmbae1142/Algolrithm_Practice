#include <stdio.h>
#include <string.h>

int main() {

    char str[202];
    int row, col;
    int i, j = -1, count = 0;

    scanf("%d", &row);
    scanf("%s", str);
    col = strlen(str) / row;

    char encode[col][row];

    for (i = 0; i < col; i++) {
        if (j == row) {
            for (j = row - 1; j >= 0; j--) {
                encode[i][j] = str[count];
                count++;
            }
        }
        else if (j == -1) {
            for (j = 0; j < row; j++) {
                encode[i][j] = str[count];
                count++;
            }
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%c", encode[j][i]);
        }
    }

}