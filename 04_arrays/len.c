#include<stdio.h>
int main()
{
    int i, d, count=0, n, a[10];
    printf("Enter number of values to be inserted\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the value\t");
        scanf("%d",&d);
        a[i]=d;
    }
    for (i = 0; i < n; i++)
    {
        count=count+1;
    }
    printf("Length of the array : %d\n",count);
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}