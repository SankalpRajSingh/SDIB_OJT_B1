#include<stdio.h>
int main()
{
    int i, j=1;
    char cr[5]={'h','e','l','l','o'};
    for (i = 0; i < 5; i++)
    {
        printf("%d = %c at the address %c\n", j, cr[i], &cr[i]);
        j=j+1;
    }
    
}