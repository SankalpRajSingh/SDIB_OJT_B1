#include<stdio.h>
int main()
{
    int b, a[10], i=0, j;
    printf("Enter the no.\n");
    scanf("%d",&b);
    while (b!=0)
    {
        if(b%2==0)
        {
            a[i]=0;
        }
        else
        {
            a[i]=1;
        }
        b=b/2;
        i=i+1;
    }
    printf("The Binary conversion is:\n");
    for (j=i-1; j >= 0; j--)
    {
        printf("%d",a[j]);
    }
    
    
}