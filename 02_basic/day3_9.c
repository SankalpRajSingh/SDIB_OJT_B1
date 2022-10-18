#include<stdio.h>
int main()
{
    int a;
    printf("Enter the age of the person\n");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("Person is elegible for voting");
    }
    else
    {
        printf("Person is not eledgible for voting");
    }
}