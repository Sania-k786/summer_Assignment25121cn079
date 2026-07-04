#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if a number is Armstrong
bool isArmstrong(int num) {
    if (num < 0) {
        return false; // Armstrong numbers are non-negative
    }

    int originalNum = num;
    int sum = 0;

    // Count number of digits
    int digits = 0;
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate sum of digits raised to the power of digits
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return sum == originalNum;
}

int main() {
    int number;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
