#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int length;
    int count;
    for(i=0;i<length;i++)
    {
        count=1;
        for(j=i+1;j<length;j++)
        {
            if(str[i]==str[j])
            {
                count+=1;
            }
        }
        if(count==1)
        {
            printf("%c",str[i]);
            break;
        }
    }
}