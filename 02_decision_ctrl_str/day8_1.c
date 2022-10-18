#include<stdio.h>
int main()
{
    int n, k=0, m;
    printf("Enter a no.\n");
    scanf("%d",&n);
    while (n>0)
    {
        m=n%10;
        k=k*10+m;
        n=n/10;
    }
    printf("Reversed no. is:%d",k);
    
}