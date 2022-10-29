#include<stdio.h>
#include<string.h>
int score(int);
int main()
{
    char a[20],b[20],n,c[20],d[20];
    int k[2], h, i;
    printf("Enter the names of two teams\n");
    scanf("%s%s",&a,&b);
    printf("Enter The Team Who Won The Toss\n");
    scanf("%s",&c);
    if (strcmp(c,a)==0)
    {
        printf("Enter Choice\tfor batting press - 1\tand for bowling press - 2\n");
        scanf("%d",&h);
        if (h==1)
        {
            printf("%s has won the toss and elected to Bat first\n",a);
            strcpy(c,b);
            strcpy(d,a);
        }
        else
        {
            printf("%s has won the toss and elected to Bowl first\n",a);
            strcpy(c,a);
            strcpy(d,b);
        }
    }
    else
    {
        printf("Enter Choice\nfor batting press - 1\tand for bowling press - 2\t");
        scanf("%d",&h);
        if (h==1)
        {
            printf("%s has won the toss and elected to Bat first\n",b);
            strcpy(c,a);
            strcpy(d,b);
        }
        else
        {
            printf("%s has won the toss and elected to Bowl first\n",b);
            strcpy(c,b);
            strcpy(d,a);
        }
    }
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
    if (k[0]>k[1])
    {
        printf("%s HAS WON THE MATCH",d);
    }
    else
    {
        printf("%s HAS WON THE MATCH",c);
    }
}