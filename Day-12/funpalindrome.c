#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    if (num < 0) {
        return false; // Negative numbers are not palindromes
    }

    int original = num;
    int reversed = 0;

    while (num != 0) {
        int digit = num % 10;
        // Check for integer overflow before multiplying
        if (reversed > (INT_MAX - digit) / 10) {
            return false; // Overflow means it's not a valid palindrome check
        }
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
