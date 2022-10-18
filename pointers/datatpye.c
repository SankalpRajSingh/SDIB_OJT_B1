#include<stdio.h>
int main()
{
    int *p;
    float f;
    p=&f;
    printf("int pointer : %d bytes\n",sizeof(p));
    printf("%d",f);
    printf("%d",p);
}