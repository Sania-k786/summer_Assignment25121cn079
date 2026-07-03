#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows in the triangle

    // Outer loop for each row
    for (i = 0; i < rows; i++) {
        // Inner loop for printing characters from 'A'
        for (j = 0; j <= i; j++) {
            printf("%c", 'A' + j);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
