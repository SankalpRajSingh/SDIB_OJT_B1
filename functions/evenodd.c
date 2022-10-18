#include<stdio.h>
int evenodd(int);
int main()
{
    int n;
    printf("Enter a no.\n");
    scanf("%d",&n);
    evenodd(n);
}
int evenodd(int n)
{
    if(n%2==0)
    {
        printf("Even no.");
    }
    else
    {
        printf("Odd no.");
    }
}