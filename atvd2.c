#include <stdio.h>

void somaMatrizes(int (*matrixA)[3], int (*matrixB)[3], int (*matrixC)[3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}

int main() {
    int matrixA[3][3] = { {24, 2, 3}, {14, 23, 6}, {21, 45, 19} };

    int matrixB[3][3] = { {1, 8, 27}, {6, 25, 44}, {33, 2, 12} };

    int matrixC[3][3]; // Matriz da soma de A e B

    somaMatrizes(matrixA, matrixB, matrixC, 3);

    printf("Matriz C (A + B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
    return 0;
}