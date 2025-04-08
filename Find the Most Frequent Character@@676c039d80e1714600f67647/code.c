#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int max_freq=0;
    int max_element;
    int count1;
    int count=strlen(str);
    for(int i=0;i<count;i++)
    {
        count1=1;
        for(int j=i+1;j<count;j++)
        {
            if(str[i]==str[j])
            {
                count1+=1;
            }
        }
        if(count1>max_freq)
        {
            max_freq=count1;
            max_element=str[i];
        }
    }
    printf("%c",max_element);
}
