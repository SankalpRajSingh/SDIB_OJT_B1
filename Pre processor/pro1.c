#include<stdio.h>
#define MAX 10
#define MIN 20
int main()
{
    #if MAX
    #if defined MIN
    #if (MAX>0 && MIN > 0)
    printf("\n positive number");
    #else
    printf("\n negative number");
    #endif
    #else
    printf("\n error:min not defined.");
    #endif
    #else
    printf("\n error max is not defined.");
    #endif
}