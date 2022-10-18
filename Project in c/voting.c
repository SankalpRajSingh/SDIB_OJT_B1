// FOR C.R ELECTION
#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10],c[10],d[10],e[10];
    int n, i,A=0,B=0,C=0,D=0;
    printf("Enter The Strength Of Class\t");
    scanf("%d",&n);
    printf("Enter names of candidates\n");
    scanf("%s%s%s%s",&a,&b,&c,&d);
    printf("VOTING STARTS\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter The Vote For The Candidate\t");
        scanf("%s",&e);
        if (strcmp(e,a)==0)
        {
            A=A+1;
        }
        else if (strcmp(e,b)==0)
        {
            B=B+1;
        }
        else if (strcmp(e,c)==0)
        {
            C=C+1;
        }
        else
        {
            D=D+1;
        }
    }
    printf("RESULTS ARE : \n");
    printf("Candidate %s has got %d votes\nCandidate %s has got %d votes\nCandidate %s has got %d votes\nCandidate %s has got %d votes\n",a,A,b,B,c,C,d,D);
    if (A>B & A>C & A>D)
    {
        printf("Candidate %s has won by %d votes",a,A);
    }
    else if (B>A & B>C & B>D)
    {
        printf("Candidate %s has won by %d votes",b,B);
    }
    else if (C>A & C>B & C>D)
    {
        printf("Candidate %s has won by %d votes",c,C);
    }
    else if (D>A & D>C & D>B)
    {
        printf("Candidate %s has won by %d votes",d,D);
    }
    else
    {
        printf("NO ONE WON\nEITHER TWO OR MORE THAN TWO HAS GOT SAME NO. OF VOTES");
    }
}