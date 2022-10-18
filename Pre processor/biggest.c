#include<stdio.h>
#define BIGGEST(x,y) (x>y) ? x : y //Macro takes no arguments
int main()
{
    int a=10, b=5, result;
    char y ='F', z ='S';
    // printf("\n Enter any two Integer : ");
    // scanf("%d%d",&a,&b);
    printf("Biggest Of Two Numbers : %d\n",BIGGEST(a,b));
    printf("Biggest Of Two Characters : %c\n",BIGGEST(y,z));
    printf("Biggest Of Two Float Numbers : %f\n",BIGGEST(54.6,78.9));
}