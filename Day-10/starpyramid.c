#include <stdio.h>

int main() {
    int rows;

    // Ask user for number of rows
    printf("Enter number of rows for the pyramid: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print spaces before stars
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars (2*i - 1 stars in each row)
        for (int star = 1; star <= (2 * i - 1); star++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
