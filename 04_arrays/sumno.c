#include<stdio.h>
int main()
{
    int i, d, sum=0, a[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value\t");
        scanf("%d",&d);
        a[i]=d;
    }
    for (i = 0; i < 5; i++)
    {
        sum=sum+a[i];
    }
    printf("Sumation of all the no. is : %d", sum);    
}