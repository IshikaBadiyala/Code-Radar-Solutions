#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
   
    int insideword=0;
    int word=0;
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
        {
            insideword=0;
        continue;
        }
        if(insideword==0)
        {
          insideword=1;
           word+=1;
        }
     
    }
    printf("%d",word);
}

