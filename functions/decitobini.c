#include<stdio.h>
int convo(int);
int main()
{
    int b;
    printf("enter a no.\n");
    scanf("%d",&b);
    printf("The decimal no. is: %d\n",b);
    convo(b);
    
}
int convo(int b)
{
    int a[10], i=0, j;
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