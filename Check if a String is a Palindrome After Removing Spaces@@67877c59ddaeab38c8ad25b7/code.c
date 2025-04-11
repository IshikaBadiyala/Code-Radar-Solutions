#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str1[100];
    fgets(str,sizeof(str),stdin);
    int palindrome=1;
    int j=0;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ' && str[i]=='\n')
        {continue;
        }
      str1[j++]=str1[i];
    }
    str[j]='\0';
  
    int count=strlen(str1);
    for(int i=0;i<count/2;i++)
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