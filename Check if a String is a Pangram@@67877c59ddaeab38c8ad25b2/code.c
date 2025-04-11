#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int found=0;
    fgets(str,sizeof(str),stdin);
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]>='A'&&str[i]<='Z'||str[i]<='a'&&str[i]<='z')
            {
             found=1;
            }
        }
        if(found)
        printf("Yes");
        else
        printf("No");
    
}