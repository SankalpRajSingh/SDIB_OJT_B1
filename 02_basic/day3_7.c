#include<stdio.h>
int main()
{
    int c, f;
    printf("enter the temperature in Celcius\n");
    scanf("%d",&c);
    f=(c*1.8)+32;
    printf("enter the temperature in Fahrenheit: %d",f);
}