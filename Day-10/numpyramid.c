#include <stdio.h>

int main() {
    int n;

    // Prompt user for number of rows
    printf("Enter number of rows: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Print increasing numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print decreasing numbers from i-1 down to 1
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
