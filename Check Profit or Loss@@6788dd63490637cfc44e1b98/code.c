#include <stdio.h>
 int main()
 {
    int CP ,SP;
    scanf("%d %d",&CP,&SP);
    if(CP<SP)
    {
        printf("Profit");
    }
    else if(CP>SP)
    {
        printf("Loss");
    }
    else if(CP=SP)
    {
        printf("No Profit No Loss");
    }

 }