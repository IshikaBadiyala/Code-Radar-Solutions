#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);  
    int length = strlen(str);
    int count;
    for (int i = 0; i < length; i++) 
    
//         count = 1; 
//         for (int j = i + 1; j < length; j++) {
//             if (str[j] == str[i]) {
//                 count++;
//                 str[j] = '0'; 
//             }
//         }
        
//         if (str[i] != '0') {
//             printf("%c: %d\n", str[i], count);
//         }
//         }

//    return 0;
// }
{
   if(str[i]=='0')
   {
    continue;
   }
   count=1;
        for (int j = i + 1; j < length; j++) {
            if (str[j] == str[i]) {
                count++;
                str[j] = '0'; 
            }
        }
        printf("%c: %d\n",str[i],count);
}
}
