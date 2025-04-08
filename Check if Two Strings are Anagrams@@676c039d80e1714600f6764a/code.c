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
    int anagram=1;
    if(count==count1)
    {
    for(i=0;i<count;i++)
    {
      for(j=i+1;j<count,j++)
      {
        if(str[i]!=str[j])
        anagram=0;
      }
    }
    }
    if(anagram)
    {
        printf("Yes");
    }
    else
    printf("No");
}