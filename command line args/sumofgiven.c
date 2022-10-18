#include<stdio.h>
int main(int argc, char *argv[])
{
    int i,sum=0,n;
    printf("\n%s\n",argv[0]);
    printf("\n%d\n",argc);
    for (i = 1; i < argc; i++)
    {
        printf("argv[%d]: %s\n",i,argv[i]);
        sscanf(argv[i],"%d",&n);
        sum=sum+n;
    }
    printf("Sum off all command line arguments : %d\t",sum);
}