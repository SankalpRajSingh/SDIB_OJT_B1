#include<stdio.h>
int main()
{
    int i, d, j=1, a[3], b[3];
    printf("Enter the value for array A\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d value:\t",j);
        scanf("%d",&d);
        a[i]=d;
        j=j+1;
    }
    for (i = 0; i < 3; i++)
    {
        b[i]=a[i];
    }
    printf("After Copying The Values Array A to Array B\n");
    for (i = 0; i < 3; i++)
    {
        printf("%d\t",b[i]);
    }
    
    
}