#include <stdio.h>  
int main()  
{  
    int a=1;    
    int *cont p;  
    p=&a;
    *p=*p+1;
    printf("%d",*p);
      
}  