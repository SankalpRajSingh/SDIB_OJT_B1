#include<stdio.h>
union unionjob
{
    char name[32];
    float salary;
    int workerNo;
}ujob;
struct structjob
{
    char name[32];
    float salary;
    int workerNo;
}sjob;
int main()
{
    printf("size of union = %ld bytes",sizeof(ujob));
    printf("\nsize of structure = %ld bytes\n",sizeof(sjob));
    return 0;
}
