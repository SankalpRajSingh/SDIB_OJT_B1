#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("hello.txt", "w");
    if(fp==NULL)
    {
        printf("file not found");
    }
    else
    {
        printf("file found");
    }
}