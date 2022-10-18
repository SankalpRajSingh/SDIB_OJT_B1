#include<stdio.h>
#include"myarth.h"
int main()
{
    int a=20, b=10;
    printf("No. on which the operation needs to be performed is  %d and %d\n", a, b);
    printf("After Addition : %d\n", add(a,b));
    printf("After Subtraction :%d\n", sub(a,b));
    printf("After Multiplication :%d\n", mul(a,b));
    printf("After Division :%d\n", div(a,b));
}