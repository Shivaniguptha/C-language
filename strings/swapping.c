#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swapping(char *s1, char *s2)
{
    char *temp=s1;
    s1=s2;
    s2=temp;
    printf("%s %s",s1, s2);
}

int main()
{
    char s1[]="hello";
    char s2[]="world";
    
    swapping(s1,s2);
    
}
