#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    printf("Enter a letter\n");
    scanf("%c",&ch);
    if (isalpha(ch)==0)
    {
        printf("Not An Alphabet\n");
    }
    else
    {
        printf("Alphabet\n");
    }
    return 0;
    
}