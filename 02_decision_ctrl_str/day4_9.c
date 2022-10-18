#include<stdio.h>
int main()
{
    int n, sum=0, i=1;
    printf("Enter Value\n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("Sum of Natural no. Upto Your provided no. is: %d",sum);
}