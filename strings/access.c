#include<stdio.h>
#include<string.h>
int main()
{
    char s[12]="password",s1[12];
    printf("Enter The Password\n");
    // gets(s1);
    scanf("%s",&s1);
    if (strcmp(s1,s)==0)
    {
        printf("Correct Password...");
    }
    else
    {
        printf("Incorrect Password...");
    }
}