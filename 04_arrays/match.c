#include<stdio.h>
int main()
{
    int i, d, k=0, a[3] = {1,2,3}, b[3];
    // for (i = 0; i < 3; i++)
    // {
    //     scanf("%d",&d);
    //     a[i]=d;
    // }
    printf("Enter the Password\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d",&d);
        b[i]=d;
    }
    for (i = 0; i < 3; i++)
    {
        if(a[i]!=b[i])
        {
            k=k+1;
            break;
        }
    }
    if (k==1)
    {
        printf("Incorrect Password\n Do Not Open The Door");
    }
    else
    {
        printf("Correct Password\n Open The Door");
    }
    
    
    
}