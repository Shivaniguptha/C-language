#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *operations[] = {"--X","X++","X++"};
    int X=0;
    
    int len=sizeof(operations)/sizeof(operations[0]);
    for(int i=0;i<len;i++)
    {
        if ((operations[i]=="X++" || operations[i]=="++X"))
        {
            X++;
        }
        else
        {
            X--;
        }
    }
    printf("%d",X);
}
