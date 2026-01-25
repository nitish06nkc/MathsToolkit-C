#include <stdio.h>
#include "matrix_ops.h"
#include "history_ops.h"
#include <string.h>

// Logs matrix operations to history file
void log_matrix(const char *op, int r, int c) {
    char log[200];
    sprintf(log, "MATRIX %s: %dx%d", op, r, c);
    save_history(log);
}

// Matrix Addition
void matrix_add() {
    int r, c;
    printf("\nEnter rows and columns: ");
    scanf("%d %d",&r,&c);

    // Variable Length Arrays (VLA)
    int A[r][c], B[r][c], C[r][c];

    // Input Matrix A
    printf("\nEnter Matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    // Input Matrix B
    printf("\nEnter Matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&B[i][j]);

    // Add matrices
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            C[i][j] = A[i][j] + B[i][j];

    // Display result
    printf("\nResult Matrix:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

    log_matrix("ADD", r, c);
}

// Matrix Subtraction
void matrix_subtract() {
    int r, c;
    printf("\nEnter rows and columns: ");
    scanf("%d %d",&r,&c);

    int A[r][c], B[r][c], C[r][c];

    printf("\nEnter Matrix A:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    printf("\nEnter Matrix B:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&B[i][j]);

    // Subtract matrices
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            C[i][j] = A[i][j] - B[i][j];

    printf("\nResult Matrix:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

    log_matrix("SUB", r, c);
}

// Matrix Multiplication
void matrix_multiply() {
    int r1,c1,r2,c2;
    printf("\nEnter rows and columns of Matrix A: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d",&r2,&c2);

    // Condition for multiplication
    if(c1 != r2) {
        printf("\nMatrix multiplication not possible!\n");
        return;
    }

    int A[r1][c1], B[r2][c2], C[r1][c2];

    printf("\nEnter Matrix A:\n");
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&A[i][j]);

    printf("\nEnter Matrix B:\n");
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            scanf("%d",&B[i][j]);

    // Matrix multiplication logic
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            C[i][j]=0;
            for(int k=0;k<c1;k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("\nResult Matrix:\n");
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

    // Custom history log format
    char log[200];
    sprintf(log, "MATRIX MUL: %dx%d * %dx%d", r1, c1, r2, c2);
    save_history(log);
}

// Matrix Transpose
void matrix_transpose() {
    int r,c;
    printf("\nEnter rows and columns: ");
    scanf("%d %d",&r,&c);

    int A[r][c], T[c][r];

    printf("\nEnter Matrix:\n");
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&A[i][j]);

    // Transpose logic (swap rows & columns)
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            T[j][i] = A[i][j];

    printf("\nTranspose Matrix:\n");
    for(int i=0;i<c;i++) {
        for(int j=0;j<r;j++)
            printf("%d ",T[i][j]);
        printf("\n");
    }

    log_matrix("TRANSPOSE", r, c);
}
