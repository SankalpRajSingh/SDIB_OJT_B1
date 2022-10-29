#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
    int fd,c;
    fd = open("/dev/ttyUSB0",O_RDONLY);
    printf("fd value is : %d\n");
    if (fd ==-1)
    {
        printf("File Not Created : ");
    }
    
}