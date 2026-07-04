#include <stdio.h>
#include <stdlib.h>

// Structure to store element and its frequency
typedef struct {
    int value;
    int freq;
} ElementFreq;

// Function to find the element with maximum frequency
int findMaxFrequencyElement(int arr[], int n) {
    if (n <= 0) {
        printf("Array is empty.\n");
        exit(1);
    }

    // Sort the array to group identical elements together
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int maxFreq = 1, currentFreq = 1;
    int maxElement = arr[0];

    // Traverse sorted array to count frequencies
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentFreq++;
        } else {
            currentFreq = 1;
        }

        // Update max frequency element
        if (currentFreq > maxFreq || 
           (currentFreq == maxFreq && arr[i] > maxElement)) {
            maxFreq = currentFreq;
            maxElement = arr[i];
        }
    }

    printf("Maximum frequency: %d\n", maxFreq);
    return maxElement;
}

int main() {
    int n;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }

    int result = findMaxFrequencyElement(arr, n);
    printf("Element with maximum frequency: %d\n", result);

    return 0;
}
