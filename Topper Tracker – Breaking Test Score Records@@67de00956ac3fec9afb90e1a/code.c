int trackScores(int scores[], int n,int result)
{
    int i;
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
    result[0]=highes_breaks;
    result[1]=lowerst_break;
}