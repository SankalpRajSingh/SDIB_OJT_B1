#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int a=10, b=20, c;
    c=add(a,b);
    printf("After Summation The result Is : %d",c);
}