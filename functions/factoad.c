#include<stdio.h>
int facto(int);
int main()
{
    int n, prod;
    printf("Enter the no.\n");
    scanf("%d",&n);
    facto(n);
}
int facto(int n)
{
    int temp=1,a,sum=0;
    a=n;
    while (a>=1)
    {
        n=a;
        while (n>=1)
        {
            temp=temp*n;
            n=n-1;
        }
        sum=sum+(temp/a);
        a=a-1;
    }
    printf("%d",sum);
    
    
    
}