#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[] = "K1:N5";
    char letter_start=s[0];
    int num_start=s[1];
    char letter_end=s[3];
    int num_end=s[4];
    
    int len=(letter_end-letter_start+1)*(num_end-48);
    int num_len=num_end-48;
    char **res=(char **)malloc(len * sizeof(char*));
    
    for(int i=0;i<len;i++)
    {
        res[i]=(char *)malloc(2 * sizeof(char));
    }
    
    for(int i=0;i<len;i++)
    {
        res[i][0]=letter_start;
        res[i][1]=num_start;   
        num_start++;
        if (num_start-48==num_len+1)
        {
            num_start=49;
            letter_start++;
        }
    }
    
    for(int i=0;i<len;i++)
    {
        printf("%s\n",res[i]);
    }
}
