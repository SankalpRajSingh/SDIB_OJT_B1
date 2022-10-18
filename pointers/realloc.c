#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i; 
    p= (int*)malloc(5*sizeof(int));
    printf("%p\n",p);
    if (p==NULL)
    {
        printf("Memory has allocated");
    }
    else
    {
        for ( i = 0; i < 5; i++)
        {
            printf("Enter %d element\n",i+1);
            scanf("%d",&p[i]);
        }
        
        printf("Elements are : \n");
        for ( i = 0; i < 5; i++)
        {
            printf("%d\n",p[i]);    
        }
        p= (int*)realloc(p,10*sizeof(int));
        for ( i = 0; i < 10; i++)
        {
            printf("Enter %d element\n",i+1);
            scanf("%d",&p[i]);
        }
        
        printf("Elements are : \n");
        for ( i = 0; i < 10; i++)
        {
            printf("%d\n",p[i]);    
        }
    }   
}