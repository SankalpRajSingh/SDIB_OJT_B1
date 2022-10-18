#include<stdio.h>
int (*fnptr)(int, int);
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int main()
{
    int i;
    char u;
    printf("For Addition Press +\nFor Multiplication Press *\nFor Division Press /\nFor Substraction Press -\n");
    scanf("%c",&u);
    switch(u)
    {
        case '+' :
        {
            fnptr=add;
            i = fnptr(10, 20);
            printf("%d\t",i);
            break;
        }
        case '*' :
        {
            fnptr=mul;
            i = fnptr(10, 20);
            printf("%d\t",i);
            break;
        }
        case '-' :
        {
            fnptr=sub;
            i = fnptr(10, 20);
            printf("%d\t",i);
            break;
        }
        case '/' :
        {
            fnptr=div;
            i = fnptr(10, 20);
            printf("%d",i);
            break;
        }
        default :
        {
            printf("Invalid input");
            break;
        }
    }
}
int add(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
int mul(int x, int y)
{
    return x*y;
}
int div(int x, int y)
{
    return x/y;
}