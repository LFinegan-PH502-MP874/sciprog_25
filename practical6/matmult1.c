#include <stdio.h>


int main() {

    // Declaring dimensions
    int n = 5, p = 3, q = 4;

    // Declaring matrices
    double A[n][p];
    double B[p][q];
    double C[n][q];

    // Initialising A by A[i][j] i + j
    printf("\n Matrix A\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            A[i][j] = i + j;
            
            printf("%f ", A[i][j]);
        }
        printf("\n");
    }

    // Initialising B by B[i][j] i - j
    printf("\n Matrix B\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            B[i][j] = i - j;

            printf("%f ", B[i][j]);
        }
        printf("\n");
    }

    // Initialising C with zeros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Computing Matrix C by C[i][j] = A[i][k] * B[k][j]
    printf("\n Matrix C\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < p; k++) {
                C[i][j] = A[i][k] * B[k][j];
            }
            printf("%f ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

