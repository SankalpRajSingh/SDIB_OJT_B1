#include<stdio.h>
void operation(int x, int y, int (*fnptr)(int a, int b))
{
    int i;
    i=fnptr(x, y);
    printf("%d",i);
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
int main()
{
    char u;
    printf("For Addition Press +\nFor Multiplication Press *\nFor Division Press /\nFor Substraction Press -\n");
    scanf("%c",&u);
    switch(u)
    {
        case '+' :
        {
            operation(20, 10, add);
            break;
        }
        case '*' :
        {
            operation(20, 10, sub);
            break;
        }
        case '-' :
        {
            operation(20, 10, mul);
            break;
        }
        case '/' :
        {
            operation(20, 10, div);
            break;
        }
        default :
        {
            printf("Invalid input");
            break;
        }
    }
}