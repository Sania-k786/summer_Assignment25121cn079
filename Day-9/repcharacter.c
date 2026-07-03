#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A'; // Starting character

    // Loop for rows (A to E)
    for (i = 0; i < 5; i++) {
        // Print the same character (i+1) times
        for (j = 0; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n"); // Move to next line
        ch++; // Move to next alphabet
    }

    return 0;
}
