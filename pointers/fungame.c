#include<stdio.h>
int main()
{
    int b[6]={1,2,3,4,5,6}, *i;
    i=&b;
    printf("%d\n",(b+5));
    printf("%d\n",(b+3));
    printf("%d\n",(i+5));
    printf("%d\n",(i+3));
    printf("%d\n",*(i+5));
    printf("%d\n",*(i+3));
    printf("%d\n",*(i+5)-*(i+3));
    printf("%d",*(i+((i+5)-(i+3))));
}