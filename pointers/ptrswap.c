#include<stdio.h>
int main()
{
    int a=5, b=6, *temp, *p, *q;
    p=&a;
    q=&b;
    printf("a=%d, b=%d\n",*p, *q);
    temp=p;
    p=q;
    q=temp;
    printf("a=%d, b=%d",*p, *q);
}