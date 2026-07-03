#include <stdio.h>
#include <stdlib.h>

// Recursive function to reverse a number
int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev; // Base case: return the reversed number
    }
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int main() {
    int num, reversed;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Handle negative numbers by reversing the absolute value
    if (num < 0) {
        reversed = -reverseNumber(abs(num), 0);
    } else {
        reversed = reverseNumber(num, 0);
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
