#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is palindrome
int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum((unsigned char)str[left])) left++;
        while (left < right && !isalnum((unsigned char)str[right])) right--;

        // Compare characters ignoring case
        if (tolower((unsigned char)str[left]) != tolower((unsigned char)str[right])) {
            return 0; // Not a palindrome
        }

        left++;
        right--;
    }
    return 1; // Palindrome
}

int main() {
    char str[200];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
