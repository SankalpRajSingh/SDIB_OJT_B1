#include<stdio.h>
typedef struct stdrec
{
    int roll,age;
    char name[30],gender;
}student;
int main()
{
    char ch;
    student s;
    FILE *fp;
    fp = fopen("Student.dat","w");
    printf("\n Enter student details\n");
    while (1)
    {
        printf("\n Enter Student Roll Number : ");
        scanf("%d",&s.roll);
        printf("\n Enter Student Name : ");
        scanf(" %[^\n]",&s.name);
        printf("\n Enter Student age : ");
        scanf("%d",&s.age);
        printf("\n Enter Student's gender : ");
        scanf(" %c",&s.gender);
        printf("\n continue.....(Y/N) : ");
        scanf(" %c",&ch);
        fprintf(fp,"\n%4d\t%-s\t%4d\t%1c",s.roll,s.name,s.age,s.gender);
        if(ch=='n' || ch=='N')
        {
            break;
        }
    }
    fclose(fp);
}