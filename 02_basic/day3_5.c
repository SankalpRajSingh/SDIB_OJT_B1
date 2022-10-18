#include<stdio.h>
int main()
{
    int a=5,b=6;
    printf("a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped value is \n a=%d b=%d\n",a,b);
}