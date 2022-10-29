#include<stdio.h>
int main(int argc, int *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
        printf("%s\n",argv[i]);  
    return 0;
}