#include<stdio.h>
int main()
{
    int i, d, a[3], b[3];
    for (i = 0; i < 3; i++)
    {
        printf("Enter the value\t");
        scanf("%d",&d);
        a[i]=d;
    }
    for (i = 0; i < 3; i++)
    {
        printf("Enter the value\t");
        scanf("%d",&d);
        a[i]=d;
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d\t",a[i]);
    }
    
}
