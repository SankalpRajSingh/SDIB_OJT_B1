#include<stdio.h>
int main()
{
    int b[6]={1,2,3,4,5,6}, i;
    for (i = 0; i < 6; i++)
    {
        printf("%d\t",*(b+i));
    }
    
}