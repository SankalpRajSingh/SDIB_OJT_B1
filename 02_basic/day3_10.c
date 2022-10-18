#include<stdio.h>
int main()
{
    int ram, shayam, ajay, elderbrother;
    printf("Enter the age of the Ram\n");
    scanf("%d",&ram);
    printf("Enter the age of the Shayam\n");
    scanf("%d",&shayam);
    printf("Enter the age of the Ajay\n");
    scanf("%d",&ajay);
    if(ram>shayam)
    {
        if(ram>ajay)
        {
            printf("Older brother is Ram: %d",ram);
        }
        else
        {
            printf("Older brother is Ajay: %d",ajay);
        }
    }
    else
    {
        if(shayam>ajay)
        {
            printf("Older brother is Shayam: %d",shayam);
        }
        else
        {
            printf("Older brother is Ajay: %d",ajay);
        }
    }
}