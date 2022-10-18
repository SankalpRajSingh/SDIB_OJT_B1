#include<stdio.h>
int main()
{
    int b[6]={1,2,3,4,5,6}, *i;
    i=&b;
    printf("%d\t",*(i+3));
    printf("%d",*(b+3));
}