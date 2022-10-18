#include<stdio.h>
int main()
{
    int a=10;
    printf("\nBefore if statement a=%d \n",a);
    if(a=1)
    {
        a=a;
    }
    printf("\nAfter if statement a=%d \n",a);
}