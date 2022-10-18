#include<stdio.h>
#include<string.h>
void disp();
int main()
{
    int a=10, b=-10;
    printf("\nfile in use : %s\n",__FILE__);
    printf("\nPresent Line : %d\n",__LINE__);
    printf("\nPresent function : %s\n",__FUNCTION__);
    disp();
    printf("\nPresent date : %s\n",__DATE__);
    printf("\nStandard C : %d\n",__STDC__);
    printf("\n");
}
void disp()
{
    printf("\nPresent Function : %s",__FUNCTION__);
}