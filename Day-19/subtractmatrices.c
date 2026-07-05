#include <stdio.h>
#include <stdlib.h>

#define MAX 10 // Maximum allowed rows and columns

// Function to subtract two matrices
void subtractMatrices(int rows, int cols, int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];

    // Input matrix dimensions
    printf("Enter number of rows and columns (max %d): ", MAX);
    if (scanf("%d %d", &rows, &cols) != 2 || rows <= 0 || cols <= 0 || rows > MAX || cols > MAX) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    // Input first matrix
    printf("Enter elements of first matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &A[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (scanf("%d", &B[i][j]) != 1) {
                printf("Invalid input.\n");
                return 1;
            }
        }
    }

    // Subtract matrices
    subtractMatrices(rows, cols, A, B, result);

    // Display result
    printf("Resultant matrix after subtraction:\n");
    displayMatrix(rows, cols, result);

    return 0;
}
