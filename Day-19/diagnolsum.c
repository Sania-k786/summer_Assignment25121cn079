#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Input size of square matrix
    printf("Enter the size of the square matrix (n x n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int matrix[n][n];

    // Input matrix elements
    printf("Enter %d elements of the matrix:\n", n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &matrix[i][j]) != 1) {
                printf("Invalid input. Please enter integers only.\n");
                return 1;
            }
        }
    }

    int principalSum = 0, secondarySum = 0;

    // Calculate sums of diagonals
    for (int i = 0; i < n; i++) {
        principalSum += matrix[i][i];           // Principal diagonal
        secondarySum += matrix[i][n - i - 1];   // Secondary diagonal
    }

    printf("\nPrincipal Diagonal Sum = %d\n", principalSum);
    printf("Secondary Diagonal Sum = %d\n", secondarySum);

    // If you want the total sum of both diagonals without double-counting the center (for odd n)
    int totalSum = principalSum + secondarySum;
    if (n % 2 == 1) {
        totalSum -= matrix[n / 2][n / 2]; // Remove duplicate center element
    }
    printf("Total Diagonal Sum (without double counting) = %d\n", totalSum);

    return 0;
}
