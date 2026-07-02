#include <stdio.h>
#include <stdlib.h> // For abs()

// Function to calculate sum of digits
int sumOfDigits(int num) {
    num = abs(num); // Handle negative numbers
    int sum = 0;
    while (num > 0) {
        sum += num % 10; // Add last digit
        num /= 10;       // Remove last digit
    }
    return sum;
}

int main() {
    int number;

    printf("Enter an integer: ");
    // Input validation
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int result = sumOfDigits(number);
    printf("Sum of digits of %d is: %d\n", number, result);

    return 0;
}
