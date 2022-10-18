#include<stdio.h>
int main()
{
    int i;
    printf("Enter the week day no.\n");
    scanf("%d",&i);
    if(i>7)
    {
        i=i%7;
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
        default :
            printf("Invalid input");
    }
    }
    else
    {
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
        default :
            printf("Invalid input");
    }
    }
}