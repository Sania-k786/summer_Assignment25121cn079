#include <stdio.h>
#include <string.h>

#define MAX_WORDS 100     // Maximum number of words
#define MAX_LEN   100     // Maximum length of each word

// Function to swap two strings
void swap(char str1[], char str2[]) {
    char temp[MAX_LEN];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

// Function to sort words by length (stable bubble sort)
void sortByLength(char words[][MAX_LEN], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strlen(words[j]) > strlen(words[j + 1])) {
                swap(words[j], words[j + 1]);
            }
        }
    }
}

int main() {
    char words[MAX_WORDS][MAX_LEN];
    int n;

    printf("Enter number of words: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_WORDS) {
        printf("Invalid number of words.\n");
        return 1;
    }

    printf("Enter %d words:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%99s", words[i]) != 1) { // Limit input to avoid overflow
            printf("Invalid input.\n");
            return 1;
        }
    }

    sortByLength(words, n);

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}
