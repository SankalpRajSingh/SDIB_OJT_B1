#include<stdio.h>
int main()
{
    // extern int a; 
    static int b;
    register int c;
    int d;
    printf("b=%d, c=%d, d=%d\n", b, c, d);
    return 0;
}