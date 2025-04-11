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
        if(str[i]!='\0')
        {
            freq[str[i]]++;
        }
    }
    for(int i=0;i<strlen(str);i++)
    {
        if(freq[str[i]]>0)
        {
            printf("%c: %d\n",str[i],freq[str[i]]);
            freq[str[i]]=0;
        }
    }
}
