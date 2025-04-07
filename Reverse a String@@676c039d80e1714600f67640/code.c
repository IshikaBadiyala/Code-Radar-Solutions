#include<stdio.h>
#include<string.h>

 int main()
    {
        char str[30];
        scanf("%s",str);
       int count=strlen(str);
        for(int i=count;i>=0;i--)
        {
            printf("%c",str[i]);
        }
    }

