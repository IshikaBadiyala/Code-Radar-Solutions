#include <stdio.h>

int main()
{
    int i;
 scanf("%d",&i);
 if(i<1||i>12)
 {
    printf("Invalid month\n")
 }
 else{
 switch(i){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("31\n");
    break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("30\n");
    break;
    case 2:
    printf("28\n");
    break;
 }
 }
return 0;
 }

