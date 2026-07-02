#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0, 1, and negative numbers are not prime
    }
    if (num == 2) {
        return true; // 2 is the only even prime number
    }
    if (num % 2 == 0) {
        return false; // Even numbers greater than 2 are not prime
    }

    // Check divisors from 3 to sqrt(num)
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;

    printf("Enter an integer: ");
    // Validate input
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Check and display result
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
