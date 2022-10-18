#include<stdio.h>
int main()
{
    int i, n, k=0, d, a[3];
    printf("Enter the value\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d",&d);
        a[i]=d;
    }
    printf("Enter the value to be deleted\t");
    scanf("%d",&n);
    for (i = 0; i < 3; i++)
    {
        if (n==a[i])
        {
            a[i]=0;
            k=k+1;
        }
        else
        {
            k=0;
        }
        
    }
    if (k==0)
    {
        printf("Value %d is not Present in the array",n);
    }
    else{
        printf("Entered Value has been Deleted\n");
        for (i = 0; i < 3; i++)
        {
            printf("%d\t",a[i]);
        }
    }
    
    
}