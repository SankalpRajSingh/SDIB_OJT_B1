#include<stdio.h>
#define BIG(x,y) (x>y)?x:y
int main()
{
    int a=10, b=12, c=45;
    // printf("\n Enter any three Integer :");
    // scanf("%d%d%d",&a,&b,&c);
    printf("\n Biggest Of Three Number Is : %d\n",BIG(BIG(a,b),c));
}