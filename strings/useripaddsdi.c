#include<stdio.h>
int main()
{
    char s[100]="Taraboi Jatni Khorda";
    printf("Enter The Address\n");
    scanf("%[^\n]s",&s);
    printf("Address is : %s\n",s);
}