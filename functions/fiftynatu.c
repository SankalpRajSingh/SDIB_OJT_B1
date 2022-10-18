#include<stdio.h>
int add()
{
    int i, sum=0;
    for (i = 0; i < 50; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    
}
int main()
{
    printf("Sum of fifty natural no. is :\n");
    add();
}
