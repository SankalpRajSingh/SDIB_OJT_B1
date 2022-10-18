#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],ch;
    FILE *fp;
    printf("Enter the file name\n");
    scanf("%[^\n]",&name);
    fp=fopen(name,"w+");       //creating a file
    if (fp==NULL)
    {
        printf("\n File Not Found \n");
    }
    printf("File is created\n");
    printf("\nEnter the data in file created and press \"clte+d\" to end\n");
    ch = getchar();
    while (ch!=EOF)
    {
        putc(ch,fp);            //writing the file 
        ch = getchar();
    }
    fseek(fp,0,SEEK_SET);
    printf("\n\n Data in file is \n");
    ch = getc(fp);
    while (ch != EOF)
    {
        putchar(ch);            //reading the file 
        ch = getc(fp);
    }
}