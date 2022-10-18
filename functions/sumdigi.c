#include<stdio.h>
int add(int i)
{
    int sum=0, k;
    while (i>0)
    {
        k=i%10;
        sum=sum+k;
        i=i/10;
    }
    printf("Value of all the digits of the given no. is : %d", sum);
    
    
    
}
int main()
{
    int i;
    printf("Enter a number :\n");
    scanf("%d",&i);
    add(i);
}