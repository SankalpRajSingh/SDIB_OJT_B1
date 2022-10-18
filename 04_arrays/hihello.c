#include<stdio.h>
int main()
{
    char j, i[2], a[2]={'h','i'};
    int  count=0;
    printf("Give your input\n");
    scanf("%s",&i);   
    for ( j = 0; j < 2; j++)
    {
        if(i[j]==a[j])
            {
                count=count+1;
            }
            else
            {
                count=0;
                break;
            }
    }
    if(count>0)
    {
        printf("hello");
    }
    else
    {
        printf("not enter hi");
    }
}