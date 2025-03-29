int factorialRange(int start,int end)
{
    int i,j;
    for (i=start;i<end;i++)
    {
        int fact=1;
        printf("%d\n",fact);
       for(j=i;j<=end;j++)
       {
        fact=fact*j;
        printf("%d\n",fact); 
       }  
    }
}