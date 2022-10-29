#include<stdio.h>
typedef struct
{
    int roll,age;
    char name[30],gender;
}student;
int main()
{

    student s;
    FILE *fp;
    fp=fopen("Student.dat","r");
    printf("\n  student details\n");
    while ((fscanf(fp,"%d %[^\t] %d %c ",&s.roll,s.name,&s.age,&s.gender))!=NULL)
    {
       printf("\n%5d %-20s %4d %1c ",s.roll,s.name,s.age,s.gender);
    }
    printf("\n");
    
    
    fclose(fp);
}