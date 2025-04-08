#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {continue;
        }
        printf("%c",str[i]);
    }
    
}