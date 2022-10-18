#include<stdio.h>
int mul(int x)
{
    int result;
    result=x*x;
    return result;
}
int main()
{
    int x, y;
    printf("Enter the value\n");
    scanf("%d",&x);
    y=mul(x);
    printf("Square of the no. is : %d",y);
}