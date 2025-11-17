// `matmult` computes the result matrix C from the matrices A and B
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]) {
    
    // Initialising C with zeros
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            C[i][j] = 0;
        }
    }

    // Computing C by C[i][j] = A[i][k] * B[k][j] 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < p; k++) {
                C[i][j] = A[i][k] * B[k][j];
            }
        }
    }
}