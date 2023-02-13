#include <stdio.h>
#include<stdlib.h>

int main()
{
    char command[] = "G()(al)";
    int len = sizeof(command)/sizeof(command[0]);
    char * res=(char *)calloc(strlen(command)+1,1);
    int i=0,j=0;
    while (command[i]!='\0')
    {
        if (command[i]=='G')
        {
            res[j]='G';
            i++;
            j++;
        }
        
        else 
        {
            i++;
            if  (command[i]==')')
            {
                res[j] = 'o';
                i++;
                j++;
            }
            else
            {
                res[j] = 'a';
                j++;
                res[j] = 'l';
                i=i+3;
                j++;
            }
        }
    }
         printf("%s",res);  
}
