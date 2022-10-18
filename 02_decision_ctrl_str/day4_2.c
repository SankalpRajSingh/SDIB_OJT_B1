#include<stdio.h>
int main()
{
    int i;
    printf("Enter the week day no. (between 1 to 7)\n");
    scanf("%d",&i);
    switch(i){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thurusday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("saturday");
            break;
    }
}