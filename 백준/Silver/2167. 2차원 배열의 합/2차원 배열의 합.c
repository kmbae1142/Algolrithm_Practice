#include <stdio.h>


int main() {

    int N, M;
    int num, sum = 0;
    int i, j, x, y;
    scanf("%d %d", &N, &M);
    int arr[N][M];

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d ", &arr[i][j]);
        }
    }

    scanf("%d", &num);

    for (int a = 0; a < num; a++) {

        scanf("%d %d %d %d", &i, &j, &x, &y);

        for (int b = i - 1; b < x; b++) {
            for (int c = j - 1; c < y; c++) {
                sum += arr[b][c];
            }
        }

        printf("%d\n", sum);
        sum = 0;

    }


}