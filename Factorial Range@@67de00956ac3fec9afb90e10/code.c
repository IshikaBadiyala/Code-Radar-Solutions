int factorialRange(int start,int end)
{
    int i,j;
    for (i=start;i<end;i++)
    {
        int fact=1;
        printf("%d\n",fact);
       for(j=1;j<=start;j++)
       {
        fact=fact*j;
       }  
       return fact;
    }
}