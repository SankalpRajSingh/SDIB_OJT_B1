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
    n=2;
    for (i = 0; i < 3; i++)
    {
        if(a[i]==n)
        {
            k=1;
            break;
        }
        
    }
    if(k==0)
    {
        printf("Expected element %d is not found",n);
    }
    else
    {
        printf("found the number");
    }
   
    // printf("Entered Value has been Deleted\n");
    // for (i = 0; i < 3; i++)
    // {
    //     printf("%d\t",a[i]);
    // }
    
    
}