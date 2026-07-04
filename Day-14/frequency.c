#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, element, count = 0;

    // Input array size
    printf("Enter number of elements in array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size. Please enter a positive integer.\n");
        return 1;
    }

    int arr[n]; // Variable Length Array (C99+)

    // Input array elements
    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }

    // Input element to find frequency
    printf("Enter element to find frequency: ");
    if (scanf("%d", &element) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    // Count frequency
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            count++;
        }
    }

    // Output result
    printf("Frequency of %d = %d\n", element, count);

    return 0;
}
