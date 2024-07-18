#include <stdio.h>


int main() {

    int N, M;
    scanf("%d %d", &N, &M);
    int matrix1[100][100];
    int matrix2[100][100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix1[i][j]);
        }
        //printf("\n");
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix2[i][j]);
        }
        //printf("\n");
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }


}