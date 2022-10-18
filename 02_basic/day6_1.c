#include<stdio.h>
int main()
{
    int a=5, b=5, c=5;
    // printf("Enter 3 sides of a triangle");
    // scanf("%d %d %d", a, b, c);
    if(a==b && b==c)
    {
        printf("It is an equilateral triangle");
    }
    else if (a==b || b==c || c==a)
    {
        printf("It is an isosceles triangle");
    }
    else
    {
        printf("It is an scalene triangle");
    }
    
}