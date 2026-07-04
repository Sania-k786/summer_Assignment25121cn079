#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is perfect
bool isPerfectNumber(int num) {
    if (num <= 0) {
        return false; // Perfect numbers are positive integers only
    }

    int sum = 0;
    // Loop to find divisors and sum them
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
