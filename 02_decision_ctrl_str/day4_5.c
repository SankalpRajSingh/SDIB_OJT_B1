#include<stdio.h>
int main()
{
    int i,j,k,l;
    printf("Enter 1st no.\n");
    scanf("%d",&i);
    printf("Enter 2nd no.\n");
    scanf("%d",&j);
    printf("Enter your choice for addition = 1 or substraction = 2\n");
    scanf("%d",&k);
    switch(k){
        case 1:
            l=i+j;
            printf("value is:%d",l);
            break;
        case 2:
            l=i-j;
            printf("value is:%d",l);
            break;
        default :
            printf("Incorrect choice");
            break;
    }
}