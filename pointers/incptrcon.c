#include<stdio.h>
int main()
{
    int b=6, *p;
    p=&b;
    printf("Before increment address is : %d and value is : %d\n",p,*p);
    *p=*p+1;
    ++p;
    printf("After increment address is : %d and value is : %d",p,*p);
}