#include<stdio.h>
int main()
{
    int i, d, j=1, student[10];
    for (i = 0; i < 10; i++)
    {
        printf("Enter the Student Id's\t");
        scanf("%d",&d);
        student[i]=d;
    }
    printf("Student Id's for ten students are:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d = %d at the address %d\n", j, student[i], &student[i]);
        j=j+1;
    }
    
}