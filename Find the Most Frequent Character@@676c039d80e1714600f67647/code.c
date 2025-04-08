#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int max_freq=INT_MIN;
    int max_element;
    int count1;
    int count=strlen(str);
    for(int i=0;i<count;i++)
    {
        count1=0;
        for(int j=i+1;j<count;j++)
        {
            if(str[i]==str[j])
            {
                count1+=1;
            }
        }
        if(count>max_freq)
        {
            max_freq=count;
            max_element=str[i];
        }
    }
    printf("%c",max_element);
}
