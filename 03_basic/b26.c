#include<stdio.h>
int main()
{
    struct C
    {
        int x;
        double z;
        short int y;
    };
    printf("Size of struct : %ld\n",sizeof(struct C));
    return 0;
    
}