#include<stdio.h>
int over()
{
    int n,i,k[2];
    printf("Enter no. of overs under (20)\t");
    scanf("%d",&n);
    for (i = 0; i < 2; i++)
    {    
        if (n>20)
        {
            printf("Value more than 20 is not excepted");
        }
        else
        {
            k[i]=score(n);
        }
        if (i==0)
        {
            printf("Now it's %s Team turn to Bat\n",c);
        }  
    }
}