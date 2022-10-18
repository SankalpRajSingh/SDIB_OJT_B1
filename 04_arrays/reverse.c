#include<stdio.h>
int main()
{
    int i, j, temp, n, k, d, a[10];
    printf("Enter the size of array\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the value\t");
        scanf("%d",&d);
        a[i]=d;
    }
    printf("Entered Values For Given Array Is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nArray After Getting Reversed\n");
    k=n;
    for ( i = 0; i < k; i++)
    {
        temp=a[i];
        a[i]=a[k-1];
        a[k-1]=temp;
        k=k-1;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    
}