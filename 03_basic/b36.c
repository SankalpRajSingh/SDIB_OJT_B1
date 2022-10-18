#include<stdio.h>
int main()
{
    struct bitfields
    {
        int bits_1: 1;
        int bits_3: 4;
        int bits_4: 3;
    }
    bit;
    printf("%d\n",sizeof(bit));
}