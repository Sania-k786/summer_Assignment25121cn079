#include <stdio.h>
#include <stdlib.h>

// Function to left rotate the array by d positions
void leftRotate(int arr[], int n, int d) {
    if (n <= 0) return; // No rotation for empty array
    d = d % n; // Handle cases where d > n
    if (d == 0) return; // No rotation needed

    int *temp = (int *)malloc(d * sizeof(int));
    if (!temp) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Store first d elements in temp
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift remaining elements to the left
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Copy temp elements to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }

    free(temp);
}

int main() {
    int n, d;

    // Input array size
    printf("Enter number of elements in array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    // Input rotation count
    printf("Enter number of positions to rotate left: ");
    if (scanf("%d", &d) != 1 || d < 0) {
        printf("Invalid rotation count.\n");
        return 1;
    }

    // Perform rotation
    leftRotate(arr, n, d);

    // Output rotated array
    printf("Array after left rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
