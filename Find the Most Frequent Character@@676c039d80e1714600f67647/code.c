#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int max_freq=0;
    int max_element;
    int count1;
    int count=strlen(str);
    for(int i=0;i<count;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(str[i]==str[j])
            {
                count1+=1;
            }
        }
        if(count>max_freq)
        {
            maxfreq=count;
            max_element=str[i];
        }
    }
    printf("%c",max_element);
}
