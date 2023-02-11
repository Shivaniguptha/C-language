#include <stdio.h>
#include<string.h>

int main()
{
    int count=0;
    char jewels[] = "aA";
    char stones[] = "aAAbbbb";
    
    for(int i=0;i<strlen(jewels);i++)
    {
        for (int j=0;j<strlen(stones);j++)
        {
            if (jewels[i]==stones[j])
            {
                count++;
            }
        }
    }
    printf("%d",count);
}
