#include<stdio.h>
void swapping(int a, int b);
int main()
{
    int n1,n2,swapped;

    printf("Enter the value of two numbers\n");
    scanf("%d %d",&n1,&n2);
    printf("Before swapping no. is\na : %d\nb : %d\n", n1, n2);

    swapping(n1, n2);        
    return 0;
}
void swapping(int a, int b)         
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("swapped no. is\na : %d\nb: %d", a, b);
}