#include<stdio.h>
int main()
{
    int *i;
    float *f;
    char *c;
    double *d;
    printf("int pointer : %d bytes\n",sizeof(i));
    printf("float pointer : %d bytes\n",sizeof(f));
    printf("char pointer : %d bytes\n",sizeof(c));
    printf("double pointer : %d bytes\n",sizeof(d));
}