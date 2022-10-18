#include<stdio.h>
#include<string.h>
int main()
{
    char s1[ ] = "hello",s2[ ] = "i'm sankalp";
    printf("Length of frist string is : %d\n",strlen (s1));
    printf("Length of second string is : %d\n",strlen (s2));
    printf("On comparing S1 with S2 : %d\n", strcmp(s1,s2));
    printf("On comparing S2 with S1 :%d\n", strcmp(s2,s1));
    printf("Before copying the string S1 is :%s\n",s1);
    strcpy(s1,s2);
    printf("After copying the string S1 is : %s\n", s1);
    strcat(s1,s2);
    printf("After Concatenation : %s\n", s1);
    return 0;

}