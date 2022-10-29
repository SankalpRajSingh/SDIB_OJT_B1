#include<stdio.h>
int score(int n)
{
    int i, j, sum=0, k, runrate, pjscore, wickets=0,w,s;
    char y[20];
    for (i = 0; i < n; i++)
    {
        printf("Enter runs for an over\n");
        for ( j = 0; j < 6; j++)
        {
            scanf("%d",&k);
            sum=sum+k;
            if (k==0)
            {
                printf("Is there Any Wicket ? If Yes press 1 Else For Wide Or No Ball Press 0 Else Press 2 For No Run\n");
                scanf("%d",&w);
                if (w==1)
                {
                    wickets=wickets+1;
                    printf("Wow that's a wicket\nNext Ball After Wicket\n");
                }
                else if (w==0)
                {
                    printf("Enter Extra Runs\t");
                    scanf("%d",&k);
                    sum=sum+k+1;
                }
            }
        }
        s=i+1;  
        runrate=sum/s;
        pjscore=runrate*n;
        printf("After %d Over Score is : %d With The Loss Of %d Wickets\n",i+1,sum,wickets);
        printf("Current Runrate Is : %d\nAnd Projected Score Is : %d\n",runrate,pjscore);
    }
    printf("Total scored by the team is : %d/%d\n",sum,wickets);
    return sum;   
}