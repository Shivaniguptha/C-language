#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char address[] = "255.100.50.0";
    
    int len=sizeof(address)/sizeof(address[0]);
    for(int i=0;i<len-1;i++)
    {
        if (address[i]=='.')   
        {
            printf("[.]");
        }
        else
        {
            printf("%c",address[i]);
        }
    }
    
}
