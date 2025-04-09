#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int isbinary=1;
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]!='1'||str[i]!=0)
        {
            isbinary=0;
            break;
        }
    }
    if(isbinary)
    printf("Yes");
    else
    printf("No");
}