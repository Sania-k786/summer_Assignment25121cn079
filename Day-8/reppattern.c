#include <stdio.h>

int main() {
    int i, j, n;

    // Ask user for number of rows
    printf("Enter the number of rows: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with error
    }

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Inner loop to print the number 'i' exactly 'i' times
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
