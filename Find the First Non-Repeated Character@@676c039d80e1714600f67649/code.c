#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    fgets(str,sizeof(Str);stdin)
    int count=0;
    for(i=0;i<strlen(str);i++)
    {
        for(j=i+1;j<strlen(str);j++)
        {
            if(str[i]==str[j])
            count+=1;
        }
        if(count==1)
        printf("%c",str[i]);
    }
   
}
