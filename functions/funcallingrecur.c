#include<stdio.h>
void prinum(int);
int main()
{
    int i=10;
    prinum(i);
}
void prinum(int i)
{
    if (i>=0)
    {
        printf("%d\n",i);
        i=i-1;
        prinum(i);
    }
    else
    {
        printf("value is printed");
    }
}