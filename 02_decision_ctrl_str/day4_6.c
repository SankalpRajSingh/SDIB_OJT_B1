#include<stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter the marks of three subjects\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=(a+b+c)/3;
    if(sum>=70)
    {
        printf("The student has got distinction and his grade is :%d",sum);
    }
    else
    {
        printf("Frist class and his grade is: %d", sum);
    }
}