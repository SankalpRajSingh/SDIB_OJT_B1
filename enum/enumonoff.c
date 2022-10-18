#include<stdio.h>
#include<string.h>
enum condition
    {
        off,
        on
    };
int main()
{
    enum condition i;
    char s[4],n[4]="on",f[4]="off";
    printf("Enter Condition\n");
    scanf("%s",&s);
    if (strcmp(s,n)==0)
    {
        i = on;
        printf("%d\n",i);
    }
    else if (strcmp(s,f)==0)
    {
        i = off;
        printf("%d\n",i);
    }
    else
    {
        printf("Invalid Command");
    }
    
}