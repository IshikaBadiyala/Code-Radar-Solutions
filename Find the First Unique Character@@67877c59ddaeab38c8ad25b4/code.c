#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int length=strlen(str);
    int count;
    int j;
    for(int i=0;i<length;i++)
    {
        count=1;
        for( j=i+1;j<length;j++)
        {
            if(str[i]==str[j])
            {
                count+=1;
                str[j]='0';
            }
        }
        if(str[j]!='0')
        {
            if(count==1)
            {
                printf("%c",str[i]);
                break;
            }
        }

    }
}