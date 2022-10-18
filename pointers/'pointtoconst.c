#include <stdio.h>  
int main()  
{  
    int a=1;    
    const int *p;  
    p=&a;
    *p=*p+1;
    printf("%d",*p);
      
}  