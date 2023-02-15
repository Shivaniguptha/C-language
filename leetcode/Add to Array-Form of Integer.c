#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int num[4] = {1,2,0,0}, k = 34, numSize = 4;
    int sum = 0, res;
    
    for(int i=0;i<numSize;i++)
    {
        res=pow(10,(numSize-1-i));
        sum=sum+(num[i]*res);
    }
    
    sum=sum+k;
    int *new = (int *)malloc(numSize * sizeof(int));
    char result[20];
    sprintf(result, "%d", sum);
    int len = strlen(result);
    
    for(int i=0;i<len;i++)
    {
        new[i] = result[i];
    }
    
    printf("Arr: [");
    for(int i=0;i<len;i++)
    {
        printf("%d, ",new[i]-48);
    }
    printf("\b\b]");
}
