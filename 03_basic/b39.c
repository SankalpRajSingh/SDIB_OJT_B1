#include<stdio.h>
int main()
{
    struct byte
    {
        int one:1;
    };
    struct  byte var ={1};
    printf("%ld\n",var.one);
    return 0;
}