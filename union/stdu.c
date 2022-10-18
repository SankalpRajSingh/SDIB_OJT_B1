#include<stdio.h>
union student
{
    char name[20];
    double id;
    int age;
};
int main()
{
    union student s;
    printf("Enter name\n");
    scanf("%s",&s.name);
    printf("Enter id\n");
    scanf("%lf",&s.id);
    printf("Enter age\n");
    scanf("%d",&s.age);
    printf("Size is : %d\n",sizeof(s));
    printf("Name : %s\n",s.name);
    printf("ID :%lf\n",s.id);
    printf("Age : %d\n",s.age);
    return 0;
}
