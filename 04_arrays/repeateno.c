#include<stdio.h>
int main()
{
    int i, d, j, count, a[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value\t");
        scanf("%d",&d);
        a[i]=d;
    }
    for (i = 0; i < 5; i++)
    {
        count=0;
        for (j = 0; j < 5; j++)
        {
            if(a[i]==a[j])
            {
                ++count;
            }
        }
        if (count>1)
        {
            printf("%d has repeated %d times in the array\n", a[i], count);
        }
        else
        {
            printf("%d has occured %d times in the array\n", a[i], count);
        }
        
    }
}