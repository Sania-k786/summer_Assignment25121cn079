#include <stdio.h>

// Function to compute factorial of a digit (0-9)
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, sum = 0;

    // Input number
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }

    originalNum = num;

    // Calculate sum of factorial of digits
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    // Check if Strong Number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
