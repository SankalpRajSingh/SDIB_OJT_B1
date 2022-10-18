#include<stdio.h>
int main()
{
    int i, d, k, n, a[10], b[10], c[20];
    printf("Enter number of values to be inserted\t");
    scanf("%d",&n);
    printf("Enter the value for 1st array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&d);
        a[i]=d;
    }
    printf("Enter the value for 2nd array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&d);
        b[i]=d;
    }
    for (i = 0; i < n; i++)
    {
        c[i]=a[i];
    }
    for (i = 0; i < n; i++)
    {
        c[i+n]=b[i];
    }
    k=2*n;
    printf("After the Union Operation the array is\n");
    for (i = 0; i < k; i++)
    {
        printf("%d\t",c[i]);
    }
    
}