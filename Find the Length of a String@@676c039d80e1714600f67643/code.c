#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    fgets(str,sizeof(str),stdin);
    int count=strlen(str);
    printf("%d",count);
}