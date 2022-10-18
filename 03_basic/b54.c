#include<stdio.h>
int main()
{
    union job {
        float salary;
        int workerNo;
    }j;
    j.salary = 12.3;
    j.workerNo = 100;
    printf("Salary = %.1f\n",j.salary);
    printf("Number of workers = %d\n",j.workerNo);
    return 0;
}