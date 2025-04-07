#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char x;
    fgets(str,sizeof(str),stdin);
    scanf(" %c",&x);
    int count=strlen(str);
    for(int i=0;i<count;i++)
    {
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
        {
            str[i]=x;
        }
    }
    printf("%s",str);
}