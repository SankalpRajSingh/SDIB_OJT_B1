#include<stdio.h>
int largest(int, int);
int main()
{
    int a, b;
    printf("Enter the no.s\n");
    scanf("%d %d",&a,&b);
    largest(a, b);
}
int largest(int a, int b)
{
    if(a>b)
    {
        printf("%d is largest",a);
    }
    else
    {
        printf("%d is largest",b);
    }
}
