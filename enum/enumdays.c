#include<stdio.h>
enum week
    {
        sunday,
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday
    }var1;
int main()
{
    var1=sunday;
    printf("%d:sunday\n",var1);
    var1=monday;
    printf("%d:monday\n",var1);
    var1=tuesday;
    printf("%d:tuesday\n",var1);
    var1=wednesday;
    printf("%d:wednesday\n",var1);
    var1=thursday;
    printf("%d:thursday\n",var1);
    var1=friday;
    printf("%d:friday\n",var1);
    var1=saturday;
    printf("%d:saturday",var1);
    return 0;
}