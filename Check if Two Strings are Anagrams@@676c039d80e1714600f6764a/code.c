#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str1[100];
    scanf("%s",str);
    scanf("%s",str1);
    int count=strlen(str);
    int count1=strlen(str1);
    if(count!=count1)
    {printf("No");
    return 0;
    }
    for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count1;j++)
        {
            if(str[i]>str[j])
            {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
        for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count1;j++)
        {
            if(str[i]>str[j])
            {
                char temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    int isanagram=1;
    for(int i=0;i<count1;i++)
    {
        if(str[i]!=str1[j])
        isanagram=0;
        break;
    }
    if(isanagram)
    printf("Yes");
    else
    printf("No");
    
}