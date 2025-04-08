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
    for(int i=0;i<count;i++)
    {
      for(int j=0;j<count1;j++)
      {
        if(str[i]!=str1[j])
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