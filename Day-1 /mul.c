#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, range;

    // Prompt user for the number
    printf("Enter the number for multiplication table: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1; // Exit with error
    }

    // Prompt user for the range
    printf("Enter the range (positive integer): ");
    if (scanf("%d", &range) != 1 || range <= 0) {
        printf("Invalid range. Please enter a positive integer.\n");
        return 1;
    }

    printf("\nMultiplication Table of %d up to %d:\n", num, range);
    printf("-----------------------------------\n");

    // Loop to print the table
    for (int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
