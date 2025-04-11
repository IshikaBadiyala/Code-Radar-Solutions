#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);  
    int length = strlen(str);
    int count;
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] != str[j]) {
            
                printf("%c",str[i]);
                break;
            }
        }
    }


}