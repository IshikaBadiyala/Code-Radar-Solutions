#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    scanf("%c",&c);
    if(isdigit(c))
    {
      printf("Digit");
    }
    else if(isalpha(c))
    {
        if(c=='a'|| c=='e' || c=='o'|| c=='u'|| c=='i'|| c=='A'|| c=='E'|| c='I'|| c=='O'|| c=='U')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonent");
        }
    
    }
    else{
        printf("Special character");
    }
    return 0;
}