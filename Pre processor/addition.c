#include<stdio.h>
#define NEGATIVE
int main()
{
    #ifdef POSITIVE
    int a=20, b=30;
    #endif
    #ifdef NEGATIVE
    int a=-10, b=-20;
    #endif
    printf("\n%d + %d = %d\n",a,b,a+b);
}