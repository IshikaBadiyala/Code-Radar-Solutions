#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str1[100];
    fgets(str,sizeof(str),stdin);
    int palindrome=1;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {continue;
        }
        str[i]=str1[i];
    }
  
    int count=strlen(str1);
    for(int i=0;i<count;i++)
    {
         if(str1[i]!=str1[count-i-1])
         {
            palindrome=0;
            break;
         }
    }
    if(palindrome==1)
    {
        printf("Yes");
    }
    else
    printf("No");
    
}