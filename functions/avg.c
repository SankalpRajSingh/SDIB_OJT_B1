#include<stdio.h>
int average(int, int);
int main()
{
    int a, b, i=0;
    while (i<3)
    {
        printf("\nEnter the numbers\n");
        scanf("%d %d",&a,&b);
        average(a, b);
        i=i+1;
    }
    
}
int average(int a, int b)
{
    int avg;
    avg=(a+b)/2;
    printf("%d is the average of %d and %d\n",avg,a,b);
}