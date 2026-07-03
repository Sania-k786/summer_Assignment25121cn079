#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows;

    // Prompt user for number of rows
    printf("Enter the number of rows for the half pyramid: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with error
    }

    // Print half pyramid
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
