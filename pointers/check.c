#include<stdio.h>
int main()
{
    int *f;
    float a=10;
    f=&a;
    printf("%p\n",f);
    printf("%u",&a);
}