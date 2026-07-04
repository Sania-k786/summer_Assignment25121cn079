#include <stdio.h>
#include <stdlib.h>

// Function to move all zeroes to the end of the array
void moveZeroesToEnd(int arr[], int n) {
    if (n <= 0) return; // Edge case: empty array

    int count = 0; // Position for the next non-zero element

    // First pass: move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill remaining positions with zeroes
    while (count < n) {
        arr[count++] = 0;
    }
}

int main() {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter integers only.\n");
            free(arr);
            return 1;
        }
    }

    moveZeroesToEnd(arr, n);

    printf("Array after moving zeroes to end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
