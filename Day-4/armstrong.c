#include <stdio.h>
#include <math.h>   // For pow() function
#include <stdlib.h> // For abs()

// Function to count digits in a number
int countDigits(int num) {
    int count = 0;
    if (num == 0) return 1; // Special case for 0
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

// Function to check if a number is Armstrong
int isArmstrong(int num) {
    int originalNum = num;
    int digits = countDigits(abs(num)); // Handle negative numbers
    int sum = 0;

    while (num != 0) {
        int digit = abs(num % 10);
        sum += (int)pow(digit, digits);
        num /= 10;
    }

    return sum == abs(originalNum);
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    if (isArmstrong(number))
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
