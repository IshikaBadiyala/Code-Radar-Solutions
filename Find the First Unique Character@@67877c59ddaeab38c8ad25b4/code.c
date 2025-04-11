#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);  
    int length = strlen(str);
    int count;
    int unique=0;
    for (int i = 0; i < length; i++) 
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
      if(count==1)
      {
        printf("%c",str[i]);
        unique=1;
        return 0;
      }
}
if(!unique)
{
    printf("-");
    return 0;
}
}