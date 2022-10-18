#include<stdio.h>
int nosq(int);
int main()
{
    int a;
    printf("Enter the no.\n");
    scanf("%d",&a);
    nosq(a);
}
int nosq(int a)
{
    int y;
    y=a*a;
    printf("The square of the given no. is : %d",y);
}