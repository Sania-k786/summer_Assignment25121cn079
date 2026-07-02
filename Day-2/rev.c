#include <stdio.h>
#include <stdlib.h> // For abs()

// Function to reverse an integer
int reverseNumber(int num) {
    int reversed = 0;
    int sign = (num < 0) ? -1 : 1; // Preserve sign
    num = abs(num); // Work with positive value for reversal

    while (num != 0) {
        int digit = num % 10;
        // Check for integer overflow before multiplying
        if (reversed > (2147483647 - digit) / 10) {
            printf("Error: Integer overflow during reversal.\n");
            return 0;
        }
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return reversed * sign; // Restore sign
}

int main() {
    int number;

    printf("Enter an integer: ");
    // Input validation
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int result = reverseNumber(number);
    printf("Reversed number: %d\n", result);

    return 0;
}
