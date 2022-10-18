#include<stdio.h>
int primeno(int);
int main()
{
    int n;
    printf("Enter a no.\n");
    scanf("%d",&n);
    printf("Entered no. is : %d\n",n);
    primeno(n);
}
int primeno(int a)
{
    int count=0, i=1;
    while (i<=a)
    {
        if (a%i==0)
        {
            count=count+1;
            i=i+1;
        }
        else
        {
            i=i+1;
        }
    }
    
    if (count<=2)
    {
        printf("Entered no. %d is a Prime no.",a);
    }
    else
    {
        printf("Entered no. %d is not a Prime no.",a);
    }  
}