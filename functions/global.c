#include<stdio.h>
int a, b;
int main()
{
    int temp;
    a=10, b=5;
    printf("before swapping a=%d b=%d\n", a, b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping a=%d b=%d\n", a, b);
}
