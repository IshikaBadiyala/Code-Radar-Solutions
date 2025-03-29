int factorialRange(int start,int end)
{
    int i,j;
    for (i=start;i<end;i++)
    {
        int fact=1;
       for(i=1;i<=end;i++)
       {
        fact=fact*i;
        printf("%d",fact); 
       }  
    }
}