#include<stdio.h>
#include<string.h>
#define MAX_CHAR 256
int main()
{
    char str[100];
    int freq[MAX_CHAR]={0};
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!=' '||str[i]!='\n')
        {
            freq[str]++;
        }
    }
    for(int i=0;i<MAX_CHAR;i++)
    {
        if(freq[str]>0)
        {
            printf("%c:%d",i,freq[i]);
        }
    }
}
