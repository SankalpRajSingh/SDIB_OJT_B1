#include<stdio.h>
int main()
{
    int x, y, z, a, b, sum;
    printf("Enter Your Subject Scores");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    scanf("%d",&a);
    scanf("%d",&b);
    sum=(a+b+x+y+z)/5;
    printf("The grade of student is: %d",sum);
}