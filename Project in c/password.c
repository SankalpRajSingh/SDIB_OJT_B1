#include<stdio.h>
#include<string.h>
void sankalp();
void sandeep();
int main()
{
    int p, P, ps;
    char s[20],d[20]="sankalp",e[20]="sandeep";
    P=1234;
    ps=2345;
    printf("ENTER USERNAME\t");
    scanf("%s",&s);
    if (strcmp(s,d)==0)
    {
        printf("\nENTER THE PASSWORD\t");
        scanf("%d",&p);
        if (p==P)
        {
            sankalp();
        }
        else
        {
            printf("Wrong Password");
        }
    }
    else if (strcmp(s,e)==0)
    {
        printf("\nENTER THE PASSWORD\t");
        scanf("%d",&p);
        if (p==ps)
        {
            sandeep();
        }
        else
        {
            printf("Wrong Password");
        }
    }
    else
    {
        printf("Wrong Username...Try Again");
    }     
}
void sankalp()
{
    printf("DETAILS OF SANKALP\nBRANCH=EIE\nSEMESTER=7TH\nCGPA=6.45\n");
}
void sandeep()
{
    printf("DETAILS OF SANDEEP\nBRANCH=EIE\nSEMESTER=7TH\nCGPA=9.45");
}