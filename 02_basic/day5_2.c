#include<stdio.h>
int main()
{
    int b, a=0, i=0, temp, k=0, g;
    printf("Enter the no.\n");
    scanf("%d",&b);
    while (b!=0)
    {
        if(b%2==0)
        {
            a=a*10+0;
        }
        else
        {
            a=a*10+1;
        }
        b=b/2;
        i=i+1;
    }
    while (a>0)
    {
        temp=a%10;
        k=k*10+temp;
        a=a/10;
    }
    
    
    printf("The Binary conversion is:%d\n",k);
    k=123;
    g=k<<2;
    printf("After masking the value is: %d\n",g);


}