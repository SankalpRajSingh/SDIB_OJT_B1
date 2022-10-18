#include<stdio.h>
int addition(int a, int b);
int multiplication();
void division(int a, int b);
void substraction();
int main()
{
    int n1,n2,sum,o,mul;

    printf("Enter the value of two numbers\n");
    scanf("%d %d",&n1,&n2);
    printf("Enter your choice\n 1:Addition\n 2:Multiplication\n 3:division\n 4:Substraction\n");
    scanf("%d",&o);
    if (o==1)
    {
        sum = addition(n1, n2);
        printf("summation is : %d", sum);
    }
    else if (o==2)
    {
        mul = multiplication(n1, n2);
        printf("product is : %d", mul);
    }
    else if (o==3)
    {
        division(n1, n2);
    }
    else if (o==4)
    {
        substraction(n1, n2);
    }
    else
    {
        printf("Wrong Choice\n");
    }        
    return 0;
}
int addition(int a, int b)         
{
    int result;
    result = a+b;
    return result;
}
int multiplication(int a, int b)
{
    int result1;
    result1 = a*b;
    return result1;
}
void division(int a, int b)
{
    int result2;
    result2 = a/b;
    printf("%d",result2);
}
void substraction(int a, int b)
{
    int result3=0;
    result3 = a-b;
    printf("%d",result3);
}