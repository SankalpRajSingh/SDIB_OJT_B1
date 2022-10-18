#include<stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6}, *p;
    p=a;
    printf("%d\t",p);
    printf("%d\t",*p);
    printf("%d\t",(++p));
    printf("%d\t",(p++));
    printf("%d",*p);
}