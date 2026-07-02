#include <stdio.h>

// Function to check if a number is perfect
int isPerfectNumber(int num) {
    if (num <= 0) {
        return 0; // Perfect numbers are positive integers only
    }

    int sum = 0;
    // Loop through possible divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    // Input validation
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (isPerfectNumber(number)) {
        printf("%d is a Perfect Number.\n", number);
    } else {
        printf("%d is NOT a Perfect Number.\n", number);
    }

    return 0;
}
