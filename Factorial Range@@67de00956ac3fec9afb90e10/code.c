int factorialRange(int start,int end)
{
    int i,j;
    for (i=start;i<=end;i++)
    {
        
       int fact=1;
       for(j=1;j<=i;j++)
       {
        
        fact=fact*j;
       }  
      printf("%d\n",fact);
    }
}