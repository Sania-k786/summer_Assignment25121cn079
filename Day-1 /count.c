#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    long long num;  // Supports large integers
    int count = 0;

    printf("Enter an integer: ");
    // Input validation
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Handle zero separately
    if (num == 0) {
        count = 1;
    } else {
        // Work with absolute value to handle negatives
        num = llabs(num);
        while (num > 0) {
            num /= 10; // Remove last digit
            count++;
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
