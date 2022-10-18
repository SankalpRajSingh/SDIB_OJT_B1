#include<stdio.h>
int main()
{
    int a;
    float b;
    double d;
    char c;
    long int in;
    short int si;
    long double ld;
    unsigned int ui;
    printf("size of int: %d bytes\n",sizeof(a));
    printf("size of float: %d bytes\n",sizeof(b));
    printf("size of double: %d bytes\n",sizeof(d));
    printf("size of char: %d bytes\n",sizeof(c));
    printf("size of long int: %d bytes\n",sizeof(in));
    printf("size of short int: %d bytes\n",sizeof(si));
    printf("size of long double: %d bytes\n",sizeof(ld));
    printf("size of unsigned int: %d bytes\n",sizeof(ui));
    return 0;
}