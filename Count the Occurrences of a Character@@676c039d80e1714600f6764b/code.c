#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char x;
    fgets(str,sizeof(str),stdin);
    scanf(" %c",&x);
    int count=strlen(str);
    int count1;
    for(i=0;i<count;i++)
    {
        if(str[i]==x)
        {
         count1+=1;   
        }
    }
    printf("%d",count1);
}