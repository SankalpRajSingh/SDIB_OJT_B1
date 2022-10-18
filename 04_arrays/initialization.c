#include<stdio.h>
int main()
{
    int i, d, a[10];
    for (i = 0; i < 10; i++)
    {
        printf("Enter the value\t");
        scanf("%d",&d);
        a[i]=d;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\t",a[i]);
    }
    
}