#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=tolower(str[i]);
        }
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=toupper(str[i]);
        }
    }
    printf("%s",str);
}

