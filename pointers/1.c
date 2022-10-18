#include <stdio.h>  
int main()  
{  
    int const *const p;    
    const int a=5;  
    p=&a;
    // ++*p;
    (*p)++;
    printf("%d",*p);
      
}  