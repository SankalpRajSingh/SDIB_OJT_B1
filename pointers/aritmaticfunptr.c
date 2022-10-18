#include<stdio.h>
int (*fnptr)(int, int);
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int main()
{
    int i;
    fnptr=add;
    i = fnptr(10, 20);
    printf("%d\t",i);
    fnptr=sub;
    i = fnptr(10, 20);
    printf("%d\t",i);
    fnptr=mul;
    i = fnptr(10, 20);
    printf("%d\t",i);
    fnptr=div;
    i = fnptr(10, 20);
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