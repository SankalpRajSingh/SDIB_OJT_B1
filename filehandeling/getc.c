#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],c;
    FILE *fp; 
    printf("Enter The File Name\n");
    scanf("%[^\n]",&name);
    fp=fopen(name,"r");
    c=getc(fp);
    printf("Value Of fp is : %d\n",fp);
    if (fp==NULL)
    {
        printf("file not found\n");
        exit(1);
    }
    printf("\n Data In %s file\n",name);
    while(c!=EOF)
    {
        putchar(c);
        c=getc(fp);
    }  
    fclose(fp);
}  