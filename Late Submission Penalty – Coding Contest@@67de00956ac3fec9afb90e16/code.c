int calculatepenalty(int subDay,int subMonth,int subYear,int dueDay ,int dueMonth ,int dueYear)
{
    int i,j;
    if(subDay>dueDay&&subMonth==dueMonth&&subYear==dueYear)
    {
        penalty=((subDay-dueDay)*10);
        printf("%d",penalty);
    }
}