#include <stdio.h>

// Declare `matmult` function defined in `matmult.c`
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]);

int main() {

    // Matrix dimensions
    int n = 5, p = 3, q = 4;

    // declaring matrices
    double A[n][p];
    double B[p][q];
    double C[n][q];


    // Initialise A by A[i][j] = i + j
    printf("\n Matrix A\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            A[i][j] = i + j;
            
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }

    // Initialise B by B[i][j] = i - j 
    printf("\n Matrix B\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            B[i][j] = i - j;

            printf("%f ", B[i][j]);
        }
        printf("\n");
    }

    // `matmult` computes C
    matmult(n, p, q, A, B, C);

    // printing matrix C
    printf("\n Matrix C\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}