int factorialRange(int start,int end)
{
    int i,j;
    for (i=start;i<end;i++)
    {
        int fact=1;
        printf("%d",fact);
       for(i=1;i<=end;i++)
       {
        fact=fact*i;
        printf("%d\n",fact); 
       }  
    }
}