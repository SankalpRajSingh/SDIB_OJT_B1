#include<stdio.h>
int main()
{
    #if defined EVEN
    int a=10, b=20;
    #else
    #if defined ODD
    int a=40, b=20;
    #else
    int a=0, b=0;
    #endif
    #endif
    printf("\n Sum of Two numbers : %d\n",a+b);
}