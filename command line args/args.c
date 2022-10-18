#include<stdio.h>
int main(int argc, char *argv[])
{
    int i;
    printf("\n%s\n",argv[0]);
    printf("\n%d\n",argc);
    for (i = 0; i < argc; i++)
    {
        printf("\nargv[%d]: %s\n",i,argv[i]);
    }
    
}