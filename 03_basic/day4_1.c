#include<stdio.h>
int main()
{
    int x=5, y=6;
    printf("Before Swapping a=%d b=%d\n",x,y);
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    printf("After Swapping a=%d b=%d\n",x,y);
}