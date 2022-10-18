#include<stdio.h>
int facto(int);
int main()
{
    int n, prod;
    printf("Enter the no.\n");
    scanf("%d",&n);
    prod=facto(n);
    printf("The factorial of a given no. is: %d",prod);
}
int facto(int n)
{
    if (n>=1)
    {
        return n*facto(n-1);
    }
    else
    {
        return 1;
    }
    
}