#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 100

// Function to find and print common characters between two strings
void findCommonChars(const char *str1, const char *str2) {
    int freq1[256] = {0}; // Frequency array for first string
    int freq2[256] = {0}; // Frequency array for second string

    // Count frequency of each character in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str1[i];
        freq1[ch]++;
    }

    // Count frequency of each character in str2
    for (int i = 0; str2[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str2[i];
        freq2[ch]++;
    }

    printf("Common characters: ");
    int found = 0;

    // Compare frequency arrays and print common characters
    for (int i = 0; i < 256; i++) {
        int commonCount = (freq1[i] < freq2[i]) ? freq1[i] : freq2[i];
        for (int j = 0; j < commonCount; j++) {
            printf("%c", i);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    char str1[MAX_LEN], str2[MAX_LEN];

    printf("Enter first string: ");
    if (!fgets(str1, sizeof(str1), stdin)) {
        printf("Error reading input.\n");
        return 1;
    }
    printf("Enter second string: ");
    if (!fgets(str2, sizeof(str2), stdin)) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline characters
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Validate non-empty strings
    if (strlen(str1) == 0 || strlen(str2) == 0) {
        printf("Both strings must be non-empty.\n");
        return 1;
    }

    findCommonChars(str1, str2);

    return 0;
}
