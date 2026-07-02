#include <stdio.h>
#include <stdlib.h>

// Function to calculate product of digits
int productOfDigits(int num) {
    num = abs(num); // Handle negative numbers
    if (num == 0) return 0; // Special case: product of digits of 0 is 0

    int product = 1;
    while (num > 0) {
        product *= (num % 10); // Multiply last digit
        num /= 10;             // Remove last digit
    }
    return product;
}

int main() {
    int number;

    printf("Enter an integer: ");
    // Input validation
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    int result = productOfDigits(number);
    printf("Product of digits of %d is: %d\n", number, result);

    return 0;
}
