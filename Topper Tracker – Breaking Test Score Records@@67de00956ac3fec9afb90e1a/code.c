int trackScores(int scores[], int n, int result)
{
    int i,j;
    int highest=scores[0];
    int lowers=scores[0];
    int highest_break=0;
    int lowerst_break=0;
    for(i=0;i<n;i++)
    {
        if(highest<scores[i])
        {
            highest=scores[i];
            highest_break++;
        }
        else if(lowers>scores[i])
        {
            lowers=scores[i];
            lowerst_break++;

        }
    }
    printf("%d",highest_break);
    printf("%d",lowerst_break);
}