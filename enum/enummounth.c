#include<stdio.h>
#include<string.h>
enum months
    {
        january,
        febuary,
        march,
        april,
        may,
        june,
        july,
        august,
        septmber,
        october,
        november,
        december,
    };
int main()
{
    enum months i;
    for (i = january; i <= december; i++)
        {
            printf("%d\n",i);
        }      
}