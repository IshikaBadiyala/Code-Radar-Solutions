#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int count;
    fgets(str,sizeof(str),stdin);
  
    for(int i=0;i<strlen(str);i++)
    {
        count=1;
        for(int j=i+1;j<strlen(str);j++)
        {
            if(str[i]==str[j])
            count+=1;
        }
      if(count==1)
      {
        printf("%c",str[i]);
        break;
      }
      if(count>4)
      {
        printf("-");
      }
       
    }
   
}
