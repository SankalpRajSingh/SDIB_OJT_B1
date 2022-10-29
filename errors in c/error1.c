#include<stdio.h>
#include<errno.h>
int main()
{
    FILE *fp;
    fp=fopen("hello.txt","r");
    perror(fp);
    printf("Value of error is : %d\n",errno);
    return 0;
    // if (fp==NULL)
    // {
    //     perror(fp);
    // }
    // else
    // {
    //     fclose(fp);
    // }
    // return 0;
}