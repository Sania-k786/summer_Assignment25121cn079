#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 50 // Maximum allowed size for rows/columns

// Function to check if a matrix is symmetric
bool isSymmetric(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false; // Found mismatch
            }
        }
    }
    return true;
}

int main() {
    int matrix[MAX][MAX];
    int rows, cols;

    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0 || rows > MAX || cols > MAX) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    // Symmetric matrix must be square
    if (rows != cols) {
        printf("Matrix is not square, hence not symmetric.\n");
        return 0;
    }

    // Input matrix elements
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    // Check symmetry
    if (isSymmetric(matrix, rows)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
