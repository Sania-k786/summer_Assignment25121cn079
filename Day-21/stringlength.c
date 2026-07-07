#include <stdio.h>

// Function to calculate string length without using strlen()
int stringLength(const char *str) {
    int length = 0;

    // Traverse until null terminator '\0' is found
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char str[1000]; // Buffer for input string

    printf("Enter a string: ");

    // Read a line of text including spaces
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove trailing newline if present
    int len = stringLength(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Length of the string is: %d\n", len);

    return 0;
}
