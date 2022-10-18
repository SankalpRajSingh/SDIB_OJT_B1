#include<stdio.h>
int increment(int*);
int main()
{
    int a=5, *q;
    printf("Before increment %d\n",a);
    increment(&a);
    printf("After increment %d",a);
}
int increment(int *a)
{
    *a=*a+1;
}