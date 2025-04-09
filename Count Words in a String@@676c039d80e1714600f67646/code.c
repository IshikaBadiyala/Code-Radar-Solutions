#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int insideword=0;
    int word=0;
    fgets(str,sizeof(str),stdin);
    while(int i<strlen(str))
    {
        if(str[i]==' ')
        {insideword=0;
        i++;
        continue;
        }
        if(insideword==0)
        {
          insideword=1;
           word+=1;
        }
        i++
    }
    printf("%d",word);
}

