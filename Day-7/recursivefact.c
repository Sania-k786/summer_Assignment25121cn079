#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return (unsigned long long)n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    // Validate input
    if (scanf("%d", &num) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Factorial grows very fast; warn if number is too large
    if (num > 20) {
        printf("Warning: Factorial of %d may overflow 64-bit unsigned integer.\n", num);
    }

    unsigned long long result = factorial(num);
    printf("Factorial of %d is: %llu\n", num, result);

    return 0;
}
