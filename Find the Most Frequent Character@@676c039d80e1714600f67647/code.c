#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); 
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    int max_freq = 0; 
    char max_element;
    int count1;
    int count = strlen(str);

    for (int i = 0; i < count; i++) {
        if (str[i] == ' ') continue; // Skip spaces

        count1 = 1; // Start counting from the current character itself

        for (int j = i + 1; j < count; j++) {
            if (str[i] == str[j]) {
                count1++;
            }
        }

        // Ensure first occurrence priority
        if (count1 > max_freq || (count1 == max_freq && max_element > str[i])) {
            max_freq = count1;
            max_element = str[i];
        }
    }

    printf("Most frequent character: %c\n", max_element);
    return 0;
}
