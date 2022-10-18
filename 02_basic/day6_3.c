#include<stdio.h>
int addition(int a, int b);
int main()
{
    int n1,n2,sum;

    printf("Enter the value of two numbers\n");
    scanf("%d %d",&n1,&n2);

    sum = addition(n1, n2);        
    printf("summation is : %d", sum);
    return 0;
}
int addition(int a, int b)         
{
    int result;
    result = a+b;
    return result;
}