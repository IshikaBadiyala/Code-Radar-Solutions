#include<stdio.h>
#include<string.h>
int main()
{
    char arr[30];
    scanf("%s",arr);
    int count=strlen(arr);
    int str=0;
    for(int i=0;i<=count;i++)
    {
        
        if(arr[i]=='A'||'E'||'I'||'O'||'U'||'a'||'e'||'i'||'o'||'u')
        {
            str+=1;
        }
    }
    printf("%d",str);
}