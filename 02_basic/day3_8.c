#include<stdio.h>
int main()
{
    int c, f;
    printf("enter the temperature in Fahrenheit\n");
    scanf("%d",&f);
    c=(f-32)*0.56;
    printf("The temperature in Celcius: %d",c);
}