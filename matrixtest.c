#include <stdio.h>

int main() {
    int A[10][10], B[10][10], result[10][10];
    int m, n, p, q, i=0,j=0,k=0;

    // Input matrix sizes
    printf("Enter rows and columns of matrix A: ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of matrix B: ");
    scanf("%d %d", &p, &q);

    // Check multiplication condition
    if (n != p) {
        printf("Matrix multiplication not possible!\n");
        return 0;
    }

    // Input matrices
    printf("Enter elements of matrix A:\n");
    for ( i = 0; i < m; i++)
        for ( j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for ( i = 0; i < p; i++)
        for ( j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Multiply matrices
    for ( i = 0; i < m; i++)
        for ( j = 0; j < q; j++) {
            result[i][j] = 0;
            for ( k = 0; k < n; k++)
                result[i][j] += A[i][k] * B[k][j];
        }

    // Print result
    printf("Resultant Matrix:\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < q; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}
