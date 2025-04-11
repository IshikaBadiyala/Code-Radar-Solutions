#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256 // Considering all possible ASCII characters

int main() {
    char str[100];
    int freq[MAX_CHAR] = {0}; // Frequency array initialized to 0

    fgets(str, sizeof(str), stdin);

    // Count occurrences of each character
    for (int i = 0; i < strlen(str); i++) {
        freq[(unsigned char)str[i]]++; // Using unsigned char to handle all characters
    }

    // Find the first non-repeating character
    for (int i = 0; i < strlen(str); i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0; // Exit after finding the first one
        }
    }

    printf("No non-repeating character found.\n"); // If all characters repeat

    return 0;
}
