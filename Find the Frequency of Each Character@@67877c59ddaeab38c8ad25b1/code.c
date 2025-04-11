#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    
    int length = strlen(str);
    
    // Outer loop iterates over each character
    for (int i = 0; i < length; i++) {
        if (str[i]!='\0') {  // Ignore spaces and newlines
           
        

        int count = 1;  // Initialize count for str[i]

        // Inner loop checks occurrences of str[i] in the rest of the string
        for (int j = i + 1; j < length; j++) {
            if (str[j] == str[i]) {
                count++;
                str[j] = '0'; // Mark character as counted to avoid duplicate printing
            }
        }
        }

        // Print the character only if it's not marked as counted
        if (str[i] != '0') {
            printf("%c: %d\n", str[i], count);
        }
    }

    return 0;
}
