#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char x;
    char y;
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    scanf("%c",&x);
    scanf("%c",&y);
    int count=strlen(str);
    for(int i=0;i<count;i++)
    {
        if(str[i]==x)
        {
            str[i]=y;
        }
    }
    printf("%s",str);
}