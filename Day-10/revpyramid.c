#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pyramid

    // Loop through each row
    for (int i = 0; i < rows; i++) {
        // Print leading spaces
        for (int space = 0; space < i; space++) {
            printf(" ");
        }

        // Print stars
        for (int star = 0; star < (2 * (rows - i) - 1); star++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
