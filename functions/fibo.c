#include<stdio.h>
void fib(int);
int main()
{
    int trm_no;
    printf("Enter the term no\n");
    scanf("%d",&trm_no);
    fib(trm_no);
}
void fib(int trm_no)
{
    int a=0, b=1, temp;
    printf("The fibonacci series upto entered term is\n");
    printf("%d\n",a);
    trm_no=trm_no-1;
    while(trm_no>0)
    {
        temp=a+b;
        a=b;
        b=temp;
        printf("%d\n", temp);
        trm_no=trm_no-1;
    }
}